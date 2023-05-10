#include <stdio.h>

int main() {
    int num, rev = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num /= 10;
    }

    printf("The reverse of the given number is: %d\n", rev);

    return 0;
}
