#include <Z3Loader.h>
#include <stdexcept>
#include <z3.h>

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
	return (major > 4 || (major == 4 && minor >= 6));
}

Z3Loader::Z3Loader(): m_handle(dlmopen(LM_ID_NEWLM, "libz3.so", RTLD_NOW))
{
}
Z3Loader::~Z3Loader()
{
	dlclose(m_handle);
}
