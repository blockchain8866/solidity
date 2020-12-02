pragma experimental SMTChecker;
pragma abicoder               v2;

contract C
{
	uint[] array;
	function f(uint[] memory a, uint[] memory b) public {
		array[0] = 42;
		uint[] storage c = array;
		a[0] = 2;
		b[0] = 1;
		// Erasing knowledge about memory references should not
		// erase knowledge about state variables.
		assert(array[0] == 42);
		// Erasing knowledge about memory references should not
		// erase knowledge about storage references.
		assert(c[0] == 42);
		assert(a[0] == 2);
		// Removed because current Spacer seg faults in cex generation.
		//assert(b[0] == 1);
	}
}
// ----
// Warning 6328: (476-493): CHC: Assertion violation happens here.\nCounterexample:\narray = []\na = [1, 8, 8, 8, 8, 8, 8, 8, 8]\nb = [1, 20, 20, 20, 20]\n\n\nTransaction trace:\nconstructor()\nState: array = []\nf([0, 6, 6, 6, 6, 6, 6], [])
