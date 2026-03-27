#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int prime[n], comp[n], d2[n], d3[n], d5[n];
    int p=0, c=0, c2=0, c3=0, c5=0;

    for (int i = 0; i < n; i++) {

        if (isPrime(arr[i])) {
            prime[p++] = arr[i];
        } 
        else if (arr[i] > 1) {
            comp[c++] = arr[i];
        }

        if (arr[i] % 2 == 0) {
            d2[c2++] = arr[i];
        }
        if (arr[i] % 3 == 0) {
            d3[c3++] = arr[i];
        }
        if (arr[i] % 5 == 0) {
            d5[c5++] = arr[i];
        }
    }
    printf("\nPrime numbers:\n");
    for (int i = 0; i < p; i++)
        printf("%d ", prime[i]);

    printf("\nComposite numbers:\n");
    for (int i = 0; i < c; i++)
        printf("%d ", comp[i]);

    printf("\nDivisible by 2:\n");
    for (int i = 0; i < c2; i++)
        printf("%d ", d2[i]);

    printf("\nDivisible by 3:\n");
    for (int i = 0; i < c3; i++)
        printf("%d ", d3[i]);

    printf("\nDivisible by 5:\n");
    for (int i = 0; i < c5; i++)
        printf("%d ", d5[i]);

    return 0;
}
