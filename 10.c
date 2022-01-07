#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int k_sum(int ch);
int main() {
    for (int i = 100; i < 10001; ++i) {
        if (k_sum(i) == i) {
            printf("%d ", i);
        }
    }
    return 0;
}
int k_sum(int ch) {
    int sumchik = 0;
    while (ch) {
        sumchik += ch % 10;
        ch /= 10;
    }
    sumchik = pow(sumchik, 3);
    return sumchik;
}
