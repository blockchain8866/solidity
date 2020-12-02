pragma experimental SMTChecker;

contract C {
	uint[][] a;
	function f() public {
		a.push();
		uint[] storage b = a[0];
		b.push(8);
		assert(b[b.length - 1] == 8);
		// Safe but fails due to aliasing.
		assert(a[0][a[0].length - 1] == 8);
	}
}
// ----
// Warning 3944: (217-232): CHC: Underflow (resulting value less than 0) happens here.\nCounterexample:\na = [[], [14, 14], [14, 14], [14, 14], [14, 14], [14, 14], [14, 14], [14, 14], [14, 14], [14, 14], [14, 14], [14, 14], [14, 14], [14, 14], [14, 14]]\n\n\n\nTransaction trace:\nconstructor()\nState: a = []\nf()
// Warning 6328: (205-239): CHC: Assertion violation happens here.\nCounterexample:\na = [[13, 13, 13, 13, 13, 13, 13, 13, 6, 13, 9, 13, 11, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 7], [16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16], [16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16], [16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16], [16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16], [16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16], [16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16], [16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16], [16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16], [16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16], [16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16], [16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16], [16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16], [16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16], [16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16], [16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16], [16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16]]\n\n\n\nTransaction trace:\nconstructor()\nState: a = []\nf()
