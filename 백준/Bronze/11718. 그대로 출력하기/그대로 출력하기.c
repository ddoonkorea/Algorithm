#include <stdio.h>
#include <string.h>


int main(void) {

    char str[100];
    while (scanf("%[^\n]s\n", str) != EOF) {
        printf("%s\n", str);
        getchar();
    }

    return 0;
}