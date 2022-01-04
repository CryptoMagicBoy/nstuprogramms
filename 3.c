#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

/*Задание 3. Сформировать массив простых чисел в диапазоне от 2 до заданного. 
Очередное простое число определяется попыткой деления нацело числа на все уже 
накопленные простые числа.*/

int simple_mas(int A[], int n);

int main() {
    int s_mas[SIZE], n = 100;
    int s_size = simple_mas(s_mas, n);
    for (int i = 0; i < s_size; ++i) {
        printf("%d ", s_mas[i]);
    }
    return 0;
}

int simple_mas(int A[], int n) {
    int count = 0, check;
    for (int ch = 2; ch < n; ++ch) {
        check = 1;
        for (int i = 0; i < count; ++i) {
            if (ch % A[i] == 0) {
                check = 0;
                break;
            }
        }
        if (check == 1) {
            A[count] = ch;
            count++;
        }
    }
    return count;
}
