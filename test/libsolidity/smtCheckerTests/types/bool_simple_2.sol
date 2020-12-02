pragma experimental SMTChecker;
contract C {
    function f(bool x, bool y) public pure {
        assert(x == y);
    }
}
// ----
// Warning 6328: (98-112): CHC: Assertion violation happens here.\nCounterexample:\n\nx = false\ny = true\n\n\nTransaction trace:\nconstructor()\nf(false, true)
