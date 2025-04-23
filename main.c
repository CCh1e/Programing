#include <stdio.h>
#include <math.h> // ��� �㭪�?� pow() (�।�� �������筥)

int main() {
    int N;
    printf("����?�� �?��?��� �������?� (N): ");
    scanf("%d", &N);

    int MAS[N]; // ��ᨢ ��� ����?����� �ᥫ
    int sum_even = 0; // �㬠 ��୨� �ᥫ
    int count_even = 0; // �?��?��� ��୨� �ᥫ
    int product_odd = 1; // ����⮪ ����୨� �ᥫ
    int count_odd = 0; // �?��?��� ����୨� �ᥫ
    int max_value = 0; // ���ᨬ��쭥 ���祭��
    int max_index = 0; // ?����� ���ᨬ��쭮�� ���祭��

    // ���㢠��� �������?� ��ᨢ�
    for (int i = 0; i < N; i++) {
        printf("����?�� ������� MAS[%d]: ", i);
        scanf("%d", &MAS[i]);

        // ��ॢ?ઠ �� ���?���
        if (MAS[i] % 2 == 0) {
            sum_even += MAS[i];
            count_even++;
        } else {
            product_odd *= MAS[i];
            count_odd++;
        }

        // ���� ���ᨬ��쭮�� ���祭��
        if (MAS[i] > max_value) {
            max_value = MAS[i];
            max_index = i;
        }
    }

    // ��������� १����?�
    if (count_even > 0) {
        printf("�㬠 ��୨� �ᥫ: %d\n", sum_even);
        printf("��।�� ��䬥�筥 ��୨� �ᥫ: %.2f\n", (float)sum_even / count_even);
    } else {
        printf("��୨� �ᥫ �����.\n");
    }

    if (count_odd > 0) {
        printf("����⮪ ����୨� �ᥫ: %d\n", product_odd);
        printf("��।�� �������筥 ����୨� �ᥫ: %.2f\n", pow(product_odd, 1.0 / count_odd));
    } else {
        printf("����୨� �ᥫ �����.\n");
    }

    printf("���ᨬ��쭥 ���祭��: %d (?�����: %d)\n", max_value, max_index);

    return 0;
}