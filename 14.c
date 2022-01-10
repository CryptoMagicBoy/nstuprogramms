#include <stdio.h>
#include <string.h>

#define SIZE 1000

int slovo(char stroka[]);

int main() {
    char stroka[] = "  Nec labore    cetero  theophrastus  no, ei    vero facer   veritus nec.    u";
    char stroka2[] = "  Nec labore    cetero  theophrastus";
    char stroka3[] = "  Niiiiiiiiiiiiiiiiec labore    cetero  theophrastus";
    printf("%d", slovo(stroka3));
    return 0;
}

int slovo(char stroka[]) {
    int index = 0, count = 1, maxcount = -1, maxindex = 0, len = strlen(stroka);
    for (int i = 0; i < len; ++i) {
        if (stroka[i] == ' ') {
            if (count > maxcount) {
                maxcount = count;
                maxindex = index;
            }
            while (stroka[i] == ' ') {
                ++i;
            }
            count = 1;
            index = i;
        } else {
            count++;
        }
        
    }
    if (count > maxcount) {
        maxcount = count;
        maxindex = index;
    }
    return maxindex;
}
