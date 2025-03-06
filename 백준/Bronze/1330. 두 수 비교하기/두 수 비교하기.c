//hello.c

#include <stdio.h>
#include <string.h>

int main(void) {

    int a,b;
    scanf("%d %d", &a, &b);
    if (a < b) {
        printf("<");
    } else if (a > b) {
        printf(">");
    } else {
        printf("==");
    }

    return 0;
}

