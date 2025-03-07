//hello.c

#include <stdio.h>
#include <string.h>

int main(void) {

    int num;
    scanf("%d", &num);
    for (int i = 1; i<= num; i++) {
        int a,b;
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i, a+b);
    }

   return 0;
}
 