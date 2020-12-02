pragma experimental SMTChecker;
contract C {
    function f(uint a) public pure { assert(a == 2); }
}
// ----
// Warning 6328: (82-96): CHC: Assertion violation happens here.\nCounterexample:\n\na = 3\n\n\nTransaction trace:\nconstructor()\nf(3)
