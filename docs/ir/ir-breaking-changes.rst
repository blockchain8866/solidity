********************************
Solidity IR-based Codegen Changes
********************************

This section highlights the main differences between the old and the IR-based codegen,
along with the reasoning behind the changes and how to update affected code.

Semantic Only Changes
=====================

This section lists the changes that are semantic-only, thus potentially
hiding new and different behavior in existing code.

 * When storage structs are deleted, every storage slot that contains a member of the struct is set to zero entirely. Formally, padding space was left untouched.
Consequently, if the padding space within a struct is used to store data (e.g. in the context of a contract upgrade), you have to be aware that ``delete`` will now also clear the added member (while it wouldn't have been cleared in the past).

::
    // SPDX-License-Identifier: GPL-3.0
    pragma solidity >0.7.0;

    contract C {
        struct S {
            uint64 y;
            uint64 z;
        }
        S s;
        function f() public {
            // ...
            delete s;
            // s occupies only first 16 bytes of the 32 bytes slot
            // delete will write zero to the full slot
        }
    }

We have the same behavior for implicit delete, for example when array of structs is shortened.

 * Function modifiers are implemented in a slightly different way regarding function parameters.
   This especially has an effect if the placeholder ``_;`` is evaluated multiple times in a modifer.
   In the old code generator, each function parameter has a fixed slot on the stack. If the function
   is run multiple times because ``_;`` is used multiple times or used in a loop, then a change to the
   function parameter's value is visible in the next execution of the function.
   The new code generator implements modifiers using actual functions and passes function parameters on.
   This means that multiple executions of a function will get the same values for the parameters.

::
    // SPDX-License-Identifier: GPL-3.0
    pragma solidity >=0.7.0;
    contract C {
        function f(uint a) public pure mod() returns (uint r) {
            r = a++;
        }
        modifier mod() { _; _; }
    }

    If you execute ``f(0)`` in the old code generator, it will return ``2``, while
    it will return ``1`` when using the new code generator.
