//hello.c

#include <stdio.h>
#include <string.h>

int main(void) {    
    
    int input, result = 0;
    int num[10];

    for (int i =0; i<10; i++) {
        scanf("%d", &input);
        num[i] = (input % 42);
    }

    for (int i = 0; i<10; i++) {
        int count = 0;
        for (int j = i+1; j<10; j++) {
            if (num[i] == num[j]) count++;
        }
        if (count == 0) result++;
    }

    printf("%d", result);

    return 0;
}
