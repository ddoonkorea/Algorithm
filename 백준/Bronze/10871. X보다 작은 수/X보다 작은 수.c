//hello.c

#include <stdio.h>
#include <string.h>

int main(void) {

    int num;        // 전체 갯수
    int std;        // 기준이 될 숫자
    int a[10000];     // 저장 공간

    scanf("%d %d" , &num, &std);
    for (int i = 0; i<num; i++) {
        scanf("%d", &a[i]);
        if (a[i] < std) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
