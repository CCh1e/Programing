#include <stdio.h>
#include <math.h> // Для функції fabs()

int main() {
    int N;
    printf("Введіть кількість елементів (N): ");
    scanf("%d", &N);

    double MAS[N]; // Масив для дійсних чисел
    double sum_negative = 0.0; // Сума від'ємних чисел
    double product_between = 1.0; // Добуток елементів між max і min
    int max_index = 0, min_index = 0; // Індекси max та min
    int i;

    // Введення елементів масиву
    for (i = 0; i < N; i++) {
        printf("Введіть MAS[%d]: ", i);
        scanf("%lf", &MAS[i]);

        // Пошук індексів максимального та мінімального елементів
        if (MAS[i] > MAS[max_index]) max_index = i;
        if (MAS[i] < MAS[min_index]) min_index = i;

        // Додавання від'ємних чисел до суми
        if (MAS[i] < 0) sum_negative += MAS[i];
    }

    // Обчислення добутку між max і min
    int start, end;
    if (max_index < min_index) {
        start = max_index + 1;
        end = min_index - 1;
    } else {
        start = min_index + 1;
        end = max_index - 1;
    }

    // Якщо max і min поряд, добуток = 0 (немає елементів між ними)
    if (fabs(max_index - min_index) <= 1) {
        product_between = 0.0;
    } else {
        for (i = start; i <= end; i++) {
            product_between *= MAS[i];
        }
    }

    // Виведення результатів
    printf("\nРезультати:\n");
    printf("1. Сума від'ємних елементів: %.2lf\n", sum_negative);
    
    if (product_between != 0.0) {
        printf("2. Добуток елементів між max і min: %.2lf\n", product_between);
    } else {
        printf("2. Між максимальним і мінімальним елементами немає чисел.\n");
    }

    printf("   Максимальний елемент: MAS[%d] = %.2lf\n", max_index, MAS[max_index]);
    printf("   Мінімальний елемент: MAS[%d] = %.2lf\n", min_index, MAS[min_index]);

    return 0;
}