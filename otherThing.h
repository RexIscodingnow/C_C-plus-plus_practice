/*
    ���| �P �R�B�A�ᦳ�����B�� ����D
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void chance_or_destiny(int score);
void result(short option, bool choose_flag /* �ƥ��� */);

void chance_or_destiny(int score) {
    srand(time(0));

    short chance = 0, destiny = 0;

    for (int i = 0; i < score; i++) {
        int random = rand() % 6 + 1;

        if (random == 1 || random == 3 || random == 5) {
            chance++;
        }
        else {
            destiny++;
        }
    }

    char targetChance[] = "���A�޾ɨ�F�A\"���|\"";
    char targetDestiny[] = "���A�޾ɨ�F�A\"�R�B\"";

    short option;
    if (chance > destiny) {
        cout<<targetChance<<endl;
        cout<<"3 �ӿﶵ�A��� 1 �Өƥ�A��J�ﶵ: 1 ~ 3 (�|�Z�n����)"<<endl;
        cout<<"(1) �~��O���U�h"<<endl<<"(2) �屼���m�A���s�A��"<<endl<<"(3) �ϥΤH�ͭ��Ӻj"<<endl;
        cout<<"=> ";
        cin>>option;
        
        result(option, true);
    }
    else {
        cout<<targetDestiny<<endl;
    }
}

void result(short option, bool choose_flag /* �ƥ��� */) {
    if (choose_flag == true) {
        /* ���| */
        bool flag = true;
        while (flag) {
            switch (option) {
                case 1:
                    cout<<"�[�o !"<<endl;
                    flag = false;
                    break;
                case 2:
                    cout<<"���W�F !"<<endl;
                    flag = false;
                    break;
                case 3:
                    cout<<"�o�̨S����o�تF��A�h���G��A�ڭn......"<<endl;
                    for (int i = 0; i < 5; i++) {
                        cout<<endl<<endl;
                    }
                    cout<<"�h��A�� ���� !"<<endl;
                    flag = false;
                    break;

                default:
                    cout<<"�ټK~ �õ���~~"<<endl;
                    flag = true;
                    break;
            }
        }
    }
    else {
        /* �R�B */
    }
}


