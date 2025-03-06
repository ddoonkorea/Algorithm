//hello.c

#include <stdio.h>
#include <string.h>

int main(void) {

    int h, m;   

    scanf("%d %d", &h, &m);

    if (m < 45) {
        h = (h == 0) ? 23 : h-1;
        m += 15;
    } else {
        m-= 45;
    }

    printf("%d %d", h, m);
    return 0;
}

