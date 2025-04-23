#include <stdio.h>
#include <stdbool.h>

// Функція для перевірки, чи зустрічається елемент в масиві більше одного разу
bool is_unique(int arr[], int size, int index) {
    for (int i = 0; i < size; i++) {
        if (i != index && arr[i] == arr[index]) {
            return false;  // Знайдено дубль
        }
    }
    return true;  // Елемент унікальний
}

int main() {
    int N;
    printf("Введіть кількість елементів масиву: ");
    scanf("%d", &N);

    int A[N];
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < N; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        if (is_unique(A, N, i)) {
            sum += A[i];
        }
    }

    printf("Сума унікальних елементів: %d\n", sum);
    return 0;
}