/*
    1D array for print 1 to 9
    �@���}�C�A�L 1 �� 9
    (�E�c��)
     int n[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
��m(position): 0  1  2  3  4  5  6  7  8
    In C language's world(?), always count numbers begin to 0
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    // length(��): 9
    int i, n[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    /* sizeof(n) -> n �}�C����`�j�p(����),
       sizeof(n[0]) -> n �}�C���� 0 ���Ƥj�p(����)
       (sizeof(n) / sizeof(n[0])) = �}�C����
    */
    for (i = 0; i < (sizeof(n) / sizeof(n[0])); ++i) {
        printf("%d", n[i]);
        printf("\n");
    }

    // �L�X�E�c��
    // for (i = 0; i < (sizeof(n) / sizeof(n[0])); ++i) {
    //     if (n[i] % 3 == 0) {
    //         printf("%d", n[i]);
    //         printf("\n");
    //     }
    //     else {
    //         printf("%d", n[i]);
    //     }
    // }

    system("pause");
    return 0;
}

