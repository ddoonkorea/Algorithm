#include <stdio.h>
#include <string.h>


int main(void) {

    char str[1000000];
    int len, i, cnt = 0;
    scanf("%[^\n]s", str);
    len = strlen(str);

    if (len == 0 || (len == 1 && str[i] == ' ')) {
        printf("0\n");
        return 0;
    }

    for (i = 1; i<len-1; i++) {
        if (str[i] == ' ') {
            cnt++;
        }
    }
    printf("%d", cnt + 1);
    return 0;
}