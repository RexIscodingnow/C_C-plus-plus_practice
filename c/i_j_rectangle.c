/*
    �y�Ъ��
    (i, j)
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int i, j, n;  // n => ��� for �����
    printf("enter the n = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++) {
            printf("(%d, %d)", i, j);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
