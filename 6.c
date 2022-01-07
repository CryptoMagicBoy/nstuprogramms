#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Arm(int ch);
int main() {
    for (int i = 100; i < 1000; ++i) {
        if (Arm(i) == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}
int Arm(int ch) {
    int check = 1;
    if (pow(ch % 10, 3) + pow(ch / 100, 3) + pow((ch % 100) / 10, 3) != ch) {
        check = 0;
    }
    return check;
}
