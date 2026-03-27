#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a and b:\n");
    scanf("%d %d", &a, &b);

    printf("Odd numbers in reverse order:\n");

    for (int i = b; i >= a; i--) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
