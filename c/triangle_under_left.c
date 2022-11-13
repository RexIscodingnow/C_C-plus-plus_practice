/*
    左下方之三角形
    using "i_j_rectangle.c" .exe file
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int i, j, n;
    printf("n = ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                printf("*");
            }
            else if (i > j) {
                printf("*");
            }
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
