pragma experimental SMTChecker;

contract C {
	function f(bytes32 _x) public pure {
		require(_x == "test");
		bytes32 y;
		bytes16 z;
		(y, z) = ("test", "testz");
		assert(_x == y);
		assert(_x == z);
	}
}
// ----
// Warning 6328: (186-201): CHC: Assertion violation happens here.\nCounterexample:\n\n_x = 1952805748\n\n\nTransaction trace:\nconstructor()\nf(1952805748)
