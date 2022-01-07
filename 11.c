#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 1000
int cut(int ch, int A[]);
int simple_ch(int ch2);
int main() {
    int mas[SIZE], n = 36;
    int k = cut(n, mas);
    for (int i = 0; i < k; ++i) {
        printf("%d ", mas[i]);
    }
    return 0;
}
int cut(int ch, int A[]) {
    int k = 0, del = 2;
    if (simple_ch(ch) == 0) {
        while (ch > 1) {
            while((ch % del) == 0) {
                ch /= del;
                A[k] = del;
                k++;
            }
            del++;
        }
    } else {
        A[k] = ch;
        k++;
    }
    A[k] = 0;
    k++;
    return k;
}
int simple_ch(int ch2) {
    int check = 1;
    for (int i = 2; i < ((int)sqrt(ch2) + 1); ++i) {
        if (ch2 % i == 0) {
            check = 0;
            break;
        }
    }
    return check;
}
