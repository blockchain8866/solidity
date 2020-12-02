pragma experimental SMTChecker;

contract C {
	function g() internal pure returns (bytes32, bytes16) {
		return ("test", "testz");
	}

	function f(bytes32 _x) public pure {
		require(_x == "test");
		(bytes32 y, bytes16 z) = g();
		assert(_x == y);
		assert(_x == z);
	}
}
// ----
// Warning 6328: (251-266): CHC: Assertion violation happens here.\nCounterexample:\n\n_x = 1952805748\n\n\nTransaction trace:\nconstructor()\nf(1952805748)
