#include <stdio.h>
#include <string.h>


int main(void) {

    int n;
    char num[101];
    scanf("%d", &n);
    scanf("%s", num);

    int sum = 0;
    for (int i =0; i< n; i++) {
        sum += num[i] - '0';
    }
    printf("%d", sum);
    return 0;

}