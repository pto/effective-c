#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>

int main() {
    printf("UCHAR_MAX is %ju\n", (uintmax_t)UCHAR_MAX);
    printf("USHRT_MAX is %ju\n", (uintmax_t)USHRT_MAX);
    printf("UINT_MAX is %ju\n", (uintmax_t)UINT_MAX);
    printf("ULONG_MAX is %ju\n", (uintmax_t)ULONG_MAX);
    printf("ULLONG_MAX is %ju\n", (uintmax_t)ULLONG_MAX);
    printf("UINTMAX_MAX is %ju\n", UINTMAX_MAX);
    printf("\n");

    unsigned int ui = UINT_MAX; // 4,294,967,295 on x86
    ui++;
    printf("ui = %u\n", ui); // ui is 0
    ui--;
    printf("ui = %u\n", ui); // ui is 4,294,967,29
    printf("\n");

    unsigned int i, j;
    i = UINT_MAX;
    j = 1;
    if (i + j > UINT_MAX) {
        printf("too big\n");
    } else {
        printf("oops: not too big\n");
    }
    i = 1;
    j = 2;
    if (i - j < 0) {
        printf("negative\n");
    } else {
        printf("oops: not negative\n");
    }

    return EXIT_SUCCESS;
}
