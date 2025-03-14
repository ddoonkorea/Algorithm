#include <stdio.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int main(void) {

    char arr[1001] = {0, };
    int num;

    scanf("%s", arr);
    scanf("%d", &num);

    printf("%c", arr[num-1]);

    return 0;

}