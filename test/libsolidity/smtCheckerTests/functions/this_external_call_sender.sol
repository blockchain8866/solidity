pragma experimental SMTChecker;

contract C {
    address lastCaller;

    constructor() {
        lastCaller = msg.sender;
    }

    modifier log {
        lastCaller = msg.sender;
        _;
    }

    function test() log public {
        assert(lastCaller == msg.sender);
        this.g();
        assert(lastCaller == address(this));
        assert(lastCaller == msg.sender);
        assert(lastCaller == address(0));
    }

    function g() log public {
    }
}
// ----
// Warning 6328: (347-379): CHC: Assertion violation happens here.\nCounterexample:\nlastCaller = 0\n\n\n\nTransaction trace:\nconstructor()\nState: lastCaller = 14\ntest()
// Warning 6328: (389-421): CHC: Assertion violation happens here.\nCounterexample:\nlastCaller = 1\n\n\n\nTransaction trace:\nconstructor()\nState: lastCaller = 14\ntest()
