//
//  swap.c
//
//  Created by Peter Olsen on 7/11/20.
//

#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);

int main(void) {
    int a = 21;
    int b = 17;
    
    swap(&a, &b);
    printf("main: a = %d, b = %d\n", a, b);
    return EXIT_SUCCESS;
}

void swap(int *pa, int *pb) {
    int t = *pa;
    *pa = *pb;
    *pb = t;
}
