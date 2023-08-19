#include <stdio.h>

int main() {

while (1) {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Positive value");
        break;
    }

    if ((num < 0) || (num % 2) != 0 ) {
         printf("Negative even");
         break;
    }

    }
    return 0;
}