/*
    basic function for driver is legal or illegal
    ��J�~�֡A�P�_�O�_���X�k�r�p
*/
#include <stdio.h>
#include <stdlib.h>

int can_drive(int);
void print_driver(int);

int main(int argc, char const *argv[]) {
    
    int age, can_dr;

    printf("Type your age: ");
    scanf("%d", &age);

    can_dr = can_drive(age); // �^�Ǧ�m
    print_driver(can_dr);

    system("pause");
    return 0;
}

// �P�_�O�_���X�k�~��
int can_drive(int age) {
    int legal;

    if (age >= 18) {
        legal = 1;
    }
    else {
        legal = 0;
    }

    return legal; // �^�Ǧ� main()
}

// �L�X���G
void print_driver(int can_dr) {
    if (can_dr == 1) {
        printf("legal_driver");
    }
    else {
        printf("illegal_driver");
    }
}