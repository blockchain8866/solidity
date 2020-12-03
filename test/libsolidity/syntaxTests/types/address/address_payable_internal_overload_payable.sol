contract C {
    function f(address payable) internal pure {}
    function f(address) internal pure {}
    function g() internal pure {
        address payable a = payable(address(0));
        f(a);
    }
}
// ----
// TypeError 4487: (193-194): No unique declaration found after argument-dependent lookup.
