/*
    2D array for print 1 to 9
    二維陣列，印 1 ~ 9
    (九宮格)
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    
    int i, j, n[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };
    // 印出九宮格
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", n[i][j]);
        }
        printf("\n");
    }
    
    system("pause");
    return 0;
}


