#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of natural numbers to generate: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
