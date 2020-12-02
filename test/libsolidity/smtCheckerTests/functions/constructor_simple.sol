pragma experimental SMTChecker;

contract C {
	uint x;

	constructor() {
		assert(x == 0);
		x = 10;
	}

	function f(uint y) public view {
		assert(y == x);
	}
}
// ----
// Warning 6328: (141-155): CHC: Assertion violation happens here.\nCounterexample:\nx = 10\ny = 11\n\n\nTransaction trace:\nconstructor()\nState: x = 10\nf(11)
