pragma experimental SMTChecker;
contract F {
	uint a;
	constructor(uint x) {
		a = x;
	}
}

abstract contract E is F {}
abstract contract D is E {
	constructor() {
		a = 3;
	}
}
abstract contract C is D {}
contract B is C {
	constructor(uint x) F(x + 1) {
	}
}

contract A is B {
	constructor(uint x) B(x) {
		assert(a == 3);
		assert(a == 4);
	}
}
// ----
// Warning 4984: (247-252): CHC: Overflow (resulting value larger than 2**256 - 1) happens here.\nCounterexample:\na = 0\nx = 115792089237316195423570985008687907853269984665640564039457584007913129639935\n\n\nTransaction trace:\nconstructor(115792089237316195423570985008687907853269984665640564039457584007913129639935)
// Warning 6328: (328-342): CHC: Assertion violation happens here.\nCounterexample:\na = 3\nx = 115792089237316195423570985008687907853269984665640564039457584007913129639935\n\n\nTransaction trace:\nconstructor(115792089237316195423570985008687907853269984665640564039457584007913129639935)
