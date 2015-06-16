#include <stdio.h>

#define MAX_NUM 100

void main (void) {

    int x;
    int flag = 0;

    for (x=1; x <= MAX_NUM; x++) {
        if (!(x%3)) {
            printf("Fizz");
            flag = 1;
        }
        if (!(x%5)) {
            printf("Buzz");
            flag = 1;
        }
        if (!flag) {
            printf("%d", x);
        }
        printf("\n");
        flag = 0;
    }
}
