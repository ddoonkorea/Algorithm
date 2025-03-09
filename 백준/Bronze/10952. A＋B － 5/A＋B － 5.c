//hello.c

#include <stdio.h>
#include <string.h>

int main(void) {

    int a,b;

    while (1) {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) break;
        int sum = a + b;
        printf("%d\n", sum);
    }
    
   return 0;
}
