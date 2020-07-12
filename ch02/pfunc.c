#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

typedef int (*pif)(int, int);

pif f(int i) {
    static pif f_array[3];
    if (f_array[0] == NULL) {
        f_array[0] = add;
        f_array[1] = sub;
        f_array[2] = mul;
    }
    return f_array[i];
}

int main(void) {
    printf("1+2 is %d\n", f(0)(1, 2));
    printf("1-2 is %d\n", f(1)(1, 2));
    printf("1*2 is %d\n", f(2)(1, 2));
    return EXIT_SUCCESS;
}
