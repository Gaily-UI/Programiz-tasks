#include <stdio.h>
#include <stdbool.h>

int main () {
int num;
    printf("Enter a number between 1 to 7 :");
    scanf("%d", &num);


switch(num) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    printf("Weekday");
    break;

    case 1:
    case 7:
    printf("Weekend");
    break;

    default:
    printf("Invalid number");
}

return 0;
}