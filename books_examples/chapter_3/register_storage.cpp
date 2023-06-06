#include <stdio.h>

int main() {
    register int x = 5;  // Declare a register variable 'x' and initialize it with the value 5
    
    printf("Value of x: %d\n", x);
    
    return 0;
}

/*Note that the usage of register has been deprecated in modern C standards (C99 and later) since the compiler can usually optimize variable storage and access more effectively on its own. As a result, the compiler may ignore the register keyword or emit a warning when it encounters it.*/
