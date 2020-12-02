pragma experimental SMTChecker;

contract Crypto {
	function hash(bytes32) external pure returns (bytes32) {
		return bytes32(0);
	}
}

contract C {
	address owner;
	bytes32 sig_1;
	bytes32 sig_2;
	Crypto d;

	constructor() {
		owner = msg.sender;
	}

	function f1(bytes32 _msg) public {
		address prevOwner = owner;
		sig_1 = d.hash(_msg);
		sig_2 = d.hash(_msg);
		assert(prevOwner == owner);
	}

	function inv() public view {
		assert(sig_1 == sig_2);
	}
}
// ----
// Warning 6328: (431-453): CHC: Assertion violation happens here.\nCounterexample:\nowner = 7, sig_1 = 0, sig_2 = (- 1), d = 0\n\n\n\nTransaction trace:\nconstructor()\nState: owner = 7, sig_1 = 0, sig_2 = 0, d = 0\nf1(0)\nState: owner = 7, sig_1 = 0, sig_2 = (- 1), d = 0\ninv()
