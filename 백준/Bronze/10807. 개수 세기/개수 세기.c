//hello.c

#include <stdio.h>
#include <string.h>

int main(void) {

    int cnt;    // 처음에 입력할 갯수
    int a[100];     // 숫자를 입력할 배열 공간
    int k;          // 어떤 숫자를 찾을지
    int n = 0;          // 입력한 숫자와 같은지 카운트 변수

    scanf("%d", &cnt);
    for (int i = 0; i< cnt; i++) {
        scanf("%d", &a[i]);
    }
        scanf("%d", &k);
    for (int i =0; i<cnt; i++) {
        if (a[i] == k) {
            n++;
        }
    }
    printf("%d", n);
   return 0;
}
