#include <stdio.h>
#include <stdlib.h>

typedef char a_type[100];

// Functions cannot return an array:
//
// a_type cannot(s_type b) {
//     return b.buf;
// }

// But functions can return a structure containing an array:

typedef struct {
    a_type buf;
} s_type;

// Works on a copy of b, so caller is unaffected
void ones_bad(s_type b) {
    for (int i = 0; i < sizeof(b.buf); i++) {
        b.buf[i] = 1;
    }
}

// Returns a copy of the result to the caller
s_type ones_good(s_type b) {
    for (int i = 0; i < sizeof(b.buf); i++) {
        b.buf[i] = 1;
    }
    return b;
}

int main() {
    s_type s;
    ones_bad(s);    // tricks compiler into thinking s is initialized
    printf("s.buf[99] = %d\n", s.buf[99]);
    s = ones_good(s);
    printf("s.buf[99] = %d\n", s.buf[99]);

    return EXIT_SUCCESS;
}
