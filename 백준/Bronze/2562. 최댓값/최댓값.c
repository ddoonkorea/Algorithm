//hello.c

#include <stdio.h>
#include <string.h>

int main(void) {

    int a[9];
    int index = 0;

    for (int i = 0; i<9; i++) {
        scanf("%d\n", &a[i]);
    }
    int max = a[0];

    for (int i =0; i<9; i++) {
        if (a[i]> max) {
            max = a[i];
            index = i;
        }
    }
    printf("%d\n%d", max, index+1);

}
