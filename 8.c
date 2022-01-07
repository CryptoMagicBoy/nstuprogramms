#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sov(int ch);
int main() {
    int n = 100;
    for (int i = 4; i < n; ++i) {
        if (sov(i) == i) {
            printf("%d ", i);
        }
    }
    return 0;
}
int sov(int ch) {
    int sumchik = 0;
    for (int del = 1; del < ((int)(ch / 2) + 1); ++del) {
        if (ch % del == 0) {
            sumchik += del;
        }
    }
    return sumchik;
}
