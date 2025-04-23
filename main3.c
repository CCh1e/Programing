#include <stdio.h>

int main() {
    int n;
    printf("Введіть кількість елементів масивів X та Y: ");
    scanf("%d", &n);

    float X[n], Y[n], Z[2*n];  // Z буде мати 2n елементів

    // Введення масиву X
    printf("Введіть елементи масиву X:\n");
    for (int i = 0; i < n; i++) {
        printf("X[%d] = ", i);
        scanf("%f", &X[i]);
    }

    // Введення масиву Y
    printf("Введіть елементи масиву Y:\n");
    for (int i = 0; i < n; i++) {
        printf("Y[%d] = ", i);
        scanf("%f", &Y[i]);
    }

    // Формування масиву Z
    for (int i = 0; i < n; i++) {
        if (X[i] < 0 && Y[i] < 0) {
            Z[i] = X[i] * X[i];      // zi = xi²
            Z[n + i] = Y[i];         // zn+i = yi
        } else {
            Z[i] = X[i] + 0.5;       // zi = xi + 0.5
            Z[n + i] = Y[i];         // zn+i = yi
        }
    }

    // Виведення масиву Z
    printf("\nРезультуючий масив Z:\n");
    for (int i = 0; i < 2*n; i++) {
        printf("Z[%d] = %4.2f\n", i, Z[i]);
    }

    return 0;
}