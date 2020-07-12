#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char str[11];
    for (unsigned int i = 0; i < 10; ++i) {
        str[i] = '0' + i;
    }
    str[10] = '\0';
    puts(str);

    return EXIT_SUCCESS;
}
