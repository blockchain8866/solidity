pragma experimental SMTChecker;
contract C {
	uint a;
	constructor(uint x) {
		a = x;
	}
}

abstract contract B is C {
	uint b;
	constructor(uint x) {
		b = x + 10;
	}
}

contract A is B {
	constructor(uint x) B(x) C(x + 2) {
		assert(a == x + 2);
		assert(b == x + 10);
		assert(b == x + 5);
	}
}

// ----
// Warning 4984: (157-163): CHC: Overflow (resulting value larger than 2**256 - 1) happens here.\nCounterexample:\nb = 0, a = 0\nx = 115792089237316195423570985008687907853269984665640564039457584007913129639926\n\n\nTransaction trace:\nconstructor(115792089237316195423570985008687907853269984665640564039457584007913129639926)
// Warning 4984: (217-222): CHC: Overflow (resulting value larger than 2**256 - 1) happens here.\nCounterexample:\nb = 0, a = 0\nx = 115792089237316195423570985008687907853269984665640564039457584007913129639934\n\n\nTransaction trace:\nconstructor(115792089237316195423570985008687907853269984665640564039457584007913129639934)
// Warning 4984: (240-245): CHC: Overflow (resulting value larger than 2**256 - 1) happens here.\nCounterexample:\nb = 8, a = 0\nx = 115792089237316195423570985008687907853269984665640564039457584007913129639934\n\n\nTransaction trace:\nconstructor(115792089237316195423570985008687907853269984665640564039457584007913129639934)
// Warning 4984: (262-268): CHC: Overflow (resulting value larger than 2**256 - 1) happens here.\nCounterexample:\nb = 8, a = 0\nx = 115792089237316195423570985008687907853269984665640564039457584007913129639934\n\n\nTransaction trace:\nconstructor(115792089237316195423570985008687907853269984665640564039457584007913129639934)
// Warning 4984: (285-290): CHC: Overflow (resulting value larger than 2**256 - 1) happens here.\nCounterexample:\nb = 8, a = 0\nx = 115792089237316195423570985008687907853269984665640564039457584007913129639934\n\n\nTransaction trace:\nconstructor(115792089237316195423570985008687907853269984665640564039457584007913129639934)
// Warning 6328: (273-291): CHC: Assertion violation happens here.\nCounterexample:\nb = 5, a = 115792089237316195423570985008687907853269984665640564039457584007913129639933\nx = 115792089237316195423570985008687907853269984665640564039457584007913129639931\n\n\nTransaction trace:\nconstructor(115792089237316195423570985008687907853269984665640564039457584007913129639931)
