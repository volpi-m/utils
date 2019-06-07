# Small unit test header file for C/C++

## Run some unit tests

Create a test function:
``` c
SALUT(function_name)
{
    // A bunch of assertion
}
```

Create a test suite:
``` c
SALUT_SUITE(suite_name)
{
    // Call your tests functions
}
```

Create a main and compile it using gcc/g++:
``` c
#include "salut.h"

int main(void)
{
    PLEASE_SUITE(your_test_suite_name);
    CIAO(); // Print information about the test you ran, how many are failing
            // and where are they failing
}
```

## Assertion functions

Test if an expression is true:
``` c
slt_true(expression);
slt_true(a == 2); // If the expression is false, increment the failed test counter
```

Test if an expression is false:
``` c
slt_false(expression);
slt_false(a == 3); // If the expression is true, increment the failed test counter
```

Test if an integer is equal to a specific integer:
``` c
slt_eq(result, expected);
slt_eq(a, 2);
```

Test if an integer is different to a specific integer:
``` c
slt_neq(result, expected);
slt_neq(a, 2);
```

Test if a double is equal to a specific double:
``` c
slt_double_eq(result, expected);
slt_double_eq(a, 3.141592654);
```

Test if a double is different to a specific double:
``` c
slt_double_neq(result, expected);
slt_double_neq(a, 3.141592654);
```

Test if a string is equal to an other string:
``` c
slt_str_eq(result, expected);
slt_str_eq(a, 2);
```

Test if a string is equal to an other string:
``` c
slt_str_neq(result, expected);
slt_str_neq(a, 2);
```
