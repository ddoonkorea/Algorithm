//hello.c

#include <stdio.h>
#include <string.h>

int main(void) {

    int num;
    int a[1000000];

    scanf("%d", &num);
    for (int i =0; i<num; i++) {
        scanf("%d", &a[i]);
    }
    int min = a[0];
    int max = a[0];

    for (int i = 0; i<num; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("%d %d", min, max);
    
    return 0;
}
