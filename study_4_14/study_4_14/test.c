#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int cocks, hens, chickens;

    for (cocks = 0; cocks <= 20; cocks++)
        for (hens = 0; hens <= 33; hens++)
        {
            chickens = 100 - cocks - hens;
            if (cocks * 5 + hens * 3 + chickens / 3 == 100)

            printf("������%dֻ��ĸ����%dֻ��������%dֻ.\n", cocks, hens, chickens);


        }
    return 0;
}