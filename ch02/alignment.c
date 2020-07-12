//
//  alignment.c
//
//  Created by Peter Olsen on 7/11/20.
//

#include <stdio.h>
#include <stdalign.h>
#include <stdlib.h>

struct S {
    int i;
    double d;
    char c;
};

int main(void) {
    unsigned char bad_buff[sizeof(struct S)];
    alignas(struct S) unsigned char good_buff[sizeof(struct S)];
    struct S *bad_s_ptr = (struct S *)bad_buff; // wrong pointer alignment
    struct S *good_s_ptr = (struct S *)good_buff; // correct pointer alignment
    
    printf("alignof(bad_buff) is %zu\n", alignof(bad_buff));
    printf("alignof(good_buff) is %zu\n", alignof(good_buff));
    
    return EXIT_SUCCESS;
}
