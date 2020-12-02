pragma experimental SMTChecker;

contract C {
	uint[][] a;
	function f(uint[] memory x, uint y) public {
		a.push(x);
		a[0].push(y);
		a[0].pop();
		assert(a[0][a[0].length - 1] == y);
	}
}
// ----
// Warning 3944: (162-177): CHC: Underflow (resulting value less than 0) happens here.\nCounterexample:\na = [[]]\nx = []\ny = 0\n\n\nTransaction trace:\nconstructor()\nState: a = []\nf([], 0)
// Warning 6328: (150-184): CHC: Assertion violation happens here.\nCounterexample:\n\ny = 0\n\n\nTransaction trace:\nconstructor()\nState: a = []\nf(x, 0)
