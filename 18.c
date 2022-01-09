#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int ch = 445, i = 0, temp;
    char stroka[1000];
    while ((int)(ch / 16)) {
        temp = ch % 16;
        switch(temp) {
            case 10:
                stroka[i++] = 'A';
                break;
            case 11:
                stroka[i++] = 'B';
                break;
            case 12:
                stroka[i++] = 'C';
                break;
            case 13:
                stroka[i++] = 'D';
                break;
            case 14:
                stroka[i++] = 'E';
                break;
            case 15:
                stroka[i++] = 'F';
                break;
            default :
                stroka[i++] = temp + '0';
        }
        ch = (int)(ch / 16);
    }
    stroka[i++] = (ch % 16) + '0';
    stroka[i++] = '\0';
    for(int k = 0; k < (int)((i - 1) / 2); k++) {
        char c = stroka[k];
        stroka[k] = stroka[i - 2 - k];
        stroka[i - 2 - k] = c;
    }
    printf("%s", stroka);
    return 0;
}
