contract C {
    address constant a = address(0);
    address payable constant b = payable(address(0));
    function f() public {
        a = address(0);
        b = payable(address(0));
    }
}
// ----
// TypeError 6520: (138-139): Cannot assign to a constant variable.
// TypeError 6520: (162-163): Cannot assign to a constant variable.
