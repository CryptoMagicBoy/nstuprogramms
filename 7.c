#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int F(int ch);
int main() {
    for (int i = 10; i < 10000; ++i) {
        if (F(i) == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}
int F(int ch) {
    int check = 1;
    if ((ch / 100) == 0) {
        if (((int)pow(ch, 2) % 100) != ch) {
            check = 0;
        }
    } else {
        if (((int)pow(ch, 2) % 1000) != ch) {
            check = 0;
        }
    }
    return check;
}
