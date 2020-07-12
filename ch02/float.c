//
//  float.c
//
//  Created by Peter Olsen on 7/11/20.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    union {
        float f;
        int i;
    } value;
    value.f = 1;
    printf("Float: %f, Integer: %d, Hex: 0x%08x\n", value.f, value.i, value.i);
    return EXIT_SUCCESS;
}
