#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int F(int ch);
int main() {
    int n = 100;
    for (int i = 1; i < n; ++i) {
        if (F(i) == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}
int F(int ch) {
    int check = 1, temp = ch, del;
    while (temp) {
        del = temp % 10;
        if ((del == 0)  || ((ch % del) != 0)) {
            check = 0;
            break;
        }
        temp /= 10;
    }
    return check;
}
