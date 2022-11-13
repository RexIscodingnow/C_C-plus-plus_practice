/*
    Array for random number
    二維陣列之亂數生成
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
    srand(time(0));
    int scNum[2][6] = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12}
    };

    int i, j, k = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 6; j++){
            int r = rand() % (12 - k) + k;
            int m = r / 2;
            int n = m % 6;
            int t = scNum[i][j];
            scNum[i][j] = scNum[m][n];
            scNum[m][n] = t;
            k++;
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 6; j++) {
            printf("%d", scNum);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
