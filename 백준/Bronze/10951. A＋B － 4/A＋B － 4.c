//hello.c

#include <stdio.h>
#include <string.h>

int main(void) {

    int a,b;

    while (scanf("%d %d", &a, &b) != -1) {
        printf("%d\n", a+b);
    }
    
   return 0;
}
