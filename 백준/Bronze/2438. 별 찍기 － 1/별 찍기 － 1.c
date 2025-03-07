//hello.c

#include <stdio.h>
#include <string.h>

int main(void) {

    int cnt,i,j;
    scanf("%d", &cnt);

    for (i = 1; i<=cnt; i++) {
        for (j = 1; j<=i; j++) 
            printf("*");
            printf("\n");
    }

   return 0;
}
 