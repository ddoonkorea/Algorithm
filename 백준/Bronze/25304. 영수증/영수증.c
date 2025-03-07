//hello.c

#include <stdio.h>
#include <string.h>

int main(void) {

   int tot, count,a,b;
   int res = 0;

   scanf("%d", &tot);
   scanf("%d", &count);

   for (int i =0; i<count; i++) {
    scanf("%d %d", &a, &b);
    res += a*b;
   }
   if (res == tot) {
    printf("Yes");
   } else {
    printf("No");
   }

    return 0;
}
 