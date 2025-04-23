#include <stdio.h>
#include <math.h> // Для функц?ї pow() (середнє геометричне)

int main() {
    int N;
    printf("Введ?ть к?льк?сть елемент?в (N): ");
    scanf("%d", &N);

    int MAS[N]; // Масив для збер?гання чисел
    int sum_even = 0; // Сума парних чисел
    int count_even = 0; // К?льк?сть парних чисел
    int product_odd = 1; // Добуток непарних чисел
    int count_odd = 0; // К?льк?сть непарних чисел
    int max_value = 0; // Максимальне значення
    int max_index = 0; // ?ндекс максимального значення

    // Зчитування елемент?в масиву
    for (int i = 0; i < N; i++) {
        printf("Введ?ть елемент MAS[%d]: ", i);
        scanf("%d", &MAS[i]);

        // Перев?рка на парн?сть
        if (MAS[i] % 2 == 0) {
            sum_even += MAS[i];
            count_even++;
        } else {
            product_odd *= MAS[i];
            count_odd++;
        }

        // Пошук максимального значення
        if (MAS[i] > max_value) {
            max_value = MAS[i];
            max_index = i;
        }
    }

    // Виведення результат?в
    if (count_even > 0) {
        printf("Сума парних чисел: %d\n", sum_even);
        printf("Середнє арифметичне парних чисел: %.2f\n", (float)sum_even / count_even);
    } else {
        printf("Парних чисел немає.\n");
    }

    if (count_odd > 0) {
        printf("Добуток непарних чисел: %d\n", product_odd);
        printf("Середнє геометричне непарних чисел: %.2f\n", pow(product_odd, 1.0 / count_odd));
    } else {
        printf("Непарних чисел немає.\n");
    }

    printf("Максимальне значення: %d (?ндекс: %d)\n", max_value, max_index);

    return 0;
}