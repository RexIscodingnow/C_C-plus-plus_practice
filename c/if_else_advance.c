/*
    if and else if (not only one) and else practice
    if �M else if (���u�@��) �H�� else �P�_��
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    /* EN: Type two peoples score, if both are get 100, give $2000.
           Or only one get 100, give $1000. Else both are't get 100 give $0.
       CH(TW): ��J��H�����ơA�Y��H�� 100 ���A��$2000�C
               �Υu���@�H100�A��$1000�A�p�G���S���h$0�C
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

