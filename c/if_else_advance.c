/*
    if and else if (not only one) and else practice
    if 和 else if (不只一個) 以及 else 判斷式
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    /* EN: Type two peoples score, if both are get 100, give $2000.
           Or only one get 100, give $1000. Else both are't get 100 give $0.
       CH(TW): 輸入兩人的分數，若兩人都 100 分，給$2000。
               或只有一人100，給$1000，如果都沒有則$0。
    */
    int score1, score2;
    printf("Type two peoples score 1~100(use space): ");
    scanf("%d %d", &score1, &score2);

    if (score1 == 100 && score2 == 100) {
        printf("Give $2000\n");
    } else if (score1 != 100 && score2 == 100 || score1 == 100 && score2 != 100) {
        printf("Give $1000\n");
    }

    else {
        printf("Give $0\n");
    }
    
    system("pause");
    return 0;
}

