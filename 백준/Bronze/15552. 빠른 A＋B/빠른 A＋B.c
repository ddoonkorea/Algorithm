//hello.c

#include <stdio.h>
#include <string.h>

int main(void) {

    int num,a,b;
    int sum = 0;

    scanf("%d", &num);

    for (int i =0; i<num; i++) {
        scanf("%d %d", &a, &b);
        sum = a + b;
        printf("%d\n", sum);
    }

   return 0;
}
 