//
//  counting.c
//
//  Created by Peter Olsen on 7/11/20.
//

#include <stdio.h>
#include <stdlib.h>

void increment(void);
int retrieve(void);

int main(void) {
    for (int i = 0; i < 5; i++) {
        increment();
    }
    printf("\n");
    printf("counter is %d\n", retrieve());
    return EXIT_SUCCESS;
}

static unsigned int counter = 0;

void increment(void) {
    counter++;
    printf("%d ", counter);
}

int retrieve(void) {
    return counter;
}
