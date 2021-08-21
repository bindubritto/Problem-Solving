# Pointer as function returns

Gist is, when we will try to return pointer from a function, we'll try this address form heap memory. Not in from stack frame. Cause stack frame will clear after function execution. And if there are another function call happen, then chances are that address will over-written or set garbage. So, we'll look for heap or global scope.

Either Heap or Global scope.
