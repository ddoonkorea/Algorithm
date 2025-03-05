//hello.c

#include <stdio.h>
#include <string.h>

int main(void) {

    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    int res1 = num1 * (num2 % 10);
    int res2 = num1 * (num2 / 10 % 10);
    int res3 = num1 * (num2 / 100);
    int res4 = num1 * num2;

    printf("%d\n", res1);
    printf("%d\n", res2);
    printf("%d\n", res3);
    printf("%d\n", res4);

    return 0;
}

