#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Задание 2. Написать функцию проверки, является ли заданное число простым. 
С ее помощью написать функцию поиска простых чисел в диапазоне 1000-2000, 
две любые части которого - также простые (например, 1997, 1-997,19-97,199-7)*/

void search();
int simple_ch(int ch);

int main() {
    search();
    return 0;
}

void search() {
    for (int i = 1000; i < 2001; ++i)
        if (simple_ch(i) == 1)
            if (simple_ch((int)(i / 1000)) == 1) // Поменять на 0, если 1 - простое
                if (simple_ch((int)(i / 100)) == 1)
                    if (simple_ch((int)(i / 10)) == 1)
                        if (simple_ch((int)(i % 1000)) == 1)
                            if (simple_ch((int)(i % 100)) == 1)
                                if (simple_ch((int)(i % 10)) == 1)
                                    printf("%d\n", i);
}

int simple_ch(int ch) {
    int check = 1;
    if (ch == 1) {
        check = 0;
    } else {
        for (int del = 2; del < ((int)(sqrt(ch)) + 1); ++del) {
            if (ch % del == 0) {
                check = 0;
                break;
            }
        }
    }
    return check;
}
