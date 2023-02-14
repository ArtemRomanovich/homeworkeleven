#include <iostream>

int main() {
    int countNum = 0;
    printf("Сколько чисел будете вводить ?\n");
    scanf("%i", &countNum);
    printf("Введите числа: \n");
    int mas[100];
    for (int a = 0; a < countNum; a++) {
        scanf("%i", &mas[a]);
    }
    for (int j = 0; j < countNum; j++) {
        for (int i = 0; i < countNum - 1; i++) {
            if (mas[i] > mas[i + 1]) {
                int z = mas[i];
                mas[i] = mas[i + 1];
                mas[i + 1] = z;
            }
        }
    }

    for (int k = 0; k < countNum; k++) {
        printf("%4i", mas[k]);
    }

    return 0;
}
