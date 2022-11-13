/*
    右下方之三角形
    using "i_j_rectangle.c" .exe file
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    
    int i, j, n;
    printf("n = ");
    scanf("%d", &n);
    // another method
    for (i = 0; i < n; i++) {   //  i = 1; i <= n; ++i
        for (j = 0; j < n; j++) {   // j = 1; j <= n; ++j
            if (i + j >= n - 1) {   // i+j >= n+1
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
