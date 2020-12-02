pragma experimental SMTChecker;

contract C
{
	uint[2] b1;
	uint[2] b2;
	function f(uint[2] storage a, uint[2] memory c) internal {
		c[0] = 42;
		a[0] = 2;
		b1[0] = 1;
		// Erasing knowledge about storage variables should not
		// erase knowledge about memory references.
		assert(c[0] == 42);
		// Fails because b1 == a is possible.
		assert(a[0] == 2);
		assert(b1[0] == 1);
	}
	function g(bool x, uint[2] memory c) public {
		if (x) f(b1, c);
		else f(b2, c);
	}
}
// ----
// Warning 6328: (338-355): CHC: Assertion violation happens here.\nCounterexample:\nb1 = [1, 17, 17, 17, 17], b2 = []\nx = false\nc = [0, 6, 6, 6, 6, 6, 6]\n\n\nTransaction trace:\nconstructor()\nState: b1 = [0, 0], b2 = [0, 0]\ng(false, [0, 6, 6, 6, 6, 6, 6])
