//hello.c

#include <stdio.h>
#include <string.h>

int main(void) {    

    int std[31] = {0, };
    int num;

    for (int i =1; i<=28; i++) {
        scanf("%d", &num);
        std[num] = 1;
    }

    for (int j =1; j<=30; j++) {
        if (std[j] != 1) {
            printf("%d\n", j);
        }
    }
    return 0;
}
