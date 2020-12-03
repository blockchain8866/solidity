#include <Z3Loader.h>
#include <stdexcept>
#include <z3.h>
#include <z3_version.h>
#include <iostream>
#include <vector>

using namespace std;

Z3Loader const& Z3Loader::get()
{
	static Z3Loader z3;
	return z3;
}
void* Z3Loader::loadSymbol(const char* _name) const
{
	if (!m_handle)
		throw std::runtime_error("Attempted to use dynamically loaded Z3, even though it is not available.");
	void* sym = dlsym(m_handle, _name);
	if (!sym)
		throw std::runtime_error(std::string("Symbol \"") + _name + "\" not found in libz3.so");
	return sym;
}

bool Z3Loader::available() const
{
	if (m_handle == nullptr)
		return false;
	unsigned major = 0;
	unsigned minor = 0;
	unsigned build = 0;
	unsigned rev = 0;
	Z3_get_version(&major, &minor, &build, &rev);
	if (major != Z3_MAJOR_VERSION || minor != Z3_MINOR_VERSION || build != Z3_BUILD_NUMBER || rev != Z3_REVISION_NUMBER)
		// TODO: proper warning, etc. - this function should probably return a BoolResult or something similar.
		std::cerr << "Warning: solidity was build against Z3 "
			<< Z3_MAJOR_VERSION << "." << Z3_MINOR_VERSION << "." << Z3_BUILD_NUMBER << "." << Z3_REVISION_NUMBER
			<< " but version " << major << "." << minor << "." << build << "." << rev << " was found. Use at your own risk."
			<< std::endl;
	return (major == 4 && minor >= 6);
}

Z3Loader::Z3Loader()
{
	vector<unsigned> versionParts{Z3_MAJOR_VERSION, Z3_MINOR_VERSION, Z3_BUILD_NUMBER, Z3_REVISION_NUMBER};
	string basename{"libz3.so"};
	while(!m_handle && !versionParts.empty())
	{
		string name = basename;
		for (unsigned part: versionParts)
			name += "." + std::to_string(part);
		m_handle = dlmopen(LM_ID_NEWLM, name.c_str(), RTLD_NOW);
		versionParts.pop_back();
	}
	if (!m_handle)
		m_handle = dlmopen(LM_ID_NEWLM, basename.c_str(), RTLD_NOW);
}
Z3Loader::~Z3Loader()
{
	if (m_handle)
		dlclose(m_handle);
}
