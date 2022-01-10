#include <stdio.h>
#include <string.h>

#define SIZE 1000

void slovo(char stroka[], char *stroka_out);

int main() {
    char stroka[] = "  Nec labore    cetero  theophrastus  no, ei    vero facer   veritus nec.    u";
    char stroka2[] = "  Nec labore    cetero  theophrastus";
    char stroka3[] = "  Niiiiiiiiiiiiiiiiec labore    cetero  theophrastus";
    char stroka_out[SIZE];
    slovo(stroka3, stroka_out);
    printf("%s", stroka_out);
    return 0;
}

void slovo(char stroka[], char *stroka_out) {
    for (int i = 0; i < strlen(stroka); ++i) {
        if (stroka[i] == ' ') {
            if (i != 0)
                *(stroka_out++) = stroka[i];
            while (stroka[i] == ' ') {
                ++i;
            }
        }
        *(stroka_out++) = stroka[i];
    }
}
