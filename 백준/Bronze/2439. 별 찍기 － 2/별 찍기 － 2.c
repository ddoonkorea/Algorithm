//hello.c

#include <stdio.h>
#include <string.h>

int main(void) {

    int cnt;
    scanf("%d", &cnt);

    for (int i = 1; i<=cnt; i++) {
        for (int j = 0; j<cnt-i; j++) {
            printf(" ");
    }
    for (int j = 0; j < i; j++) {
        printf("*");
    }
    printf("\n");
}
   return 0;
}
