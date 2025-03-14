#include <stdio.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int main(void) {

    char arr[101] = {0, };
    scanf("%s", arr);
    int num = strlen(arr);
    printf("%d", num);

    return 0;

}