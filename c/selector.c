/*
    �\���ܾ�
    ��J���w�r��A����: �p�ɾ�
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

unsigned int hour = 0, minute = 0, second = 0, microSc = 0;

void delay(int);
int counter();

int main(int argc, char const *argv[]) {
    
    counter();

    system("pause");
    return 0;
}

void delay(int ms) {
    clock_t timeDelay = ms + clock();
    while (timeDelay > clock());
}

int counter() {
    if (minute > 59) {
        hour++;
        minute = 0;
    } 
        if (second > 59) {
            minute++;
            second = 0;
        }
}