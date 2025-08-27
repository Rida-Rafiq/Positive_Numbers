#include <stdio.h>

int main() {
    int num, count = 0;

    do {
        printf("Enter a number (-1 to stop): ");
        scanf("%d", &num);

        if(num > 0) {
            count++;
        }

    } while(num != -1);

    printf("Total positive numbers entered = %d\n", count);
    return 0;
}
