#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 17;
    int *ip = &i;

    if (ip == &*ip) {
        puts("indirection is cancelled by address-of");
    } else {
        puts("indirection is NOT cancelled by address-of");
    }

    return EXIT_SUCCESS;
}
