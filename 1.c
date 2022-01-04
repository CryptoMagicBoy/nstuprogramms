#include <stdio.h>
#include <stdlib.h>

/* Задание1. Найти наименьшее общее кратное для всех элементов массива - 
минимальное число, которое делится на все элементы массива без остатка.*/

int nod(int a, int b);
int nok(int A[], int n);

int main() {
    int n = 10, mas[10] = {5, 10, 15, 20, 25, 30, 99, 40, 15, 10};
    printf("%d", nok(mas, n));
    return 0;
}

int nod(int a, int b) {
    while (a * b != 0) {
        if (a > b) {
            a %= b;
        } else {
            b %= a;
        }
    }
    return (a + b);
}

int nok(int A[], int n) {
    int temp = A[0];
    for (int i = 1; i < n; ++i) {
        temp = temp * A[i] / nod(temp, A[i]);
    }
    return temp;
}
