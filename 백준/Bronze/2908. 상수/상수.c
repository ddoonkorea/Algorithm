#include <stdio.h>
#include <string.h>


int main(void) {

    char a[4], b[4];
    char temp;

    scanf("%3s %3s", a, b);

    temp = a[0];
    a[0] = a[2];
    a[2] = temp;

    temp = b[0];
    b[0] = b[2];
    b[2] = temp;

    if (strcmp(a,b) > 0) {
        printf("%s", a);
    } else printf("%s", b);

}