/*
    J ���ɮ׬O�@���u���հ���ϡv

    ex: �ƦC�զX�� C �X���X ( �W n �U m )
            ������ժ��p

    ��������: VScode && C++
 */
#include <iostream>
#include <stdlib.h>
#include <string.h>  // strcmp(str1, str2) --> �r��ۦP�A��^�Ȭ� 0 ; �Ϥ��A�h ��^�Ȭ���L�ƭ�
#include <time.h>

#include "otherThing.h"

using namespace std;

void comb(int n, int m);
void perm(int n, int m);
long factorial(long number);

int main(int argc, char const *argv[]) {
    // ����O���o��
    // std::cout<<"hello world!"<<std::endl;  // ���ϥ� using namespace std;
    
    // �ϥΤF�A�R�W�Ŷ� std
    // cout<<"hello"<<endl;
    
    int n, m;
    bool running = false;
    char str[20];

    cout<<"�ƦC�զX C�A��J: \"comb\", \"C\"(�j�p�g���i) "<<endl<<"�ƦC�զX P�A��J: \"perm\", \"P\"(�j�p�g���i) "<<endl;
    cout<<"���|�ΩR�B (Chance or Destiny)�A��J: \"Chance or Destiny\", \"run dice\", \"dice\""<<endl<<endl;
    
    while (running != true) {
        cout<<"=> ";
        gets(str);
        if (!strcmp(str, "comb") || !strcmp(str, "c") || !strcmp(str, "C")) {
            running = true;
            cout<<"�ƦC�զX�A�B��N�� C"<<endl<<"n (�W) �� m (�U)"<<endl;
            cout<<"n = ";
            cin>>n;
            cout<<"m = ";
            cin>>m;

            comb(n, m);
        }
        else if (!strcmp(str, "perm") || !strcmp(str, "p") || !strcmp(str, "P")) {
            running = true;
            cout<<"�ƦC�զX�A�B��N�� P"<<endl<<"n (�W) �� m (�U)"<<endl;
            cout<<"n = ";
            cin>>n;
            cout<<"m = ";
            cin>>m;

            perm(n, m);
        }
        else if (!strcmp(str, "Chance or Destiny") || !strcmp(str, "run dice") || !strcmp(str, "dice")) {
            running = true;
            int score;
            cout<<"��J���� => ";
            cin>>score;
            chance_or_destiny(score);
        }
        else {
            running = false;
        }
    }

    return 0;
}

// �ƦC"�զX" �B��Ÿ� C (�W n �� m�A�ڳ��s C n �� m)
void comb(int n, int m) {
    /*
    �����p�U:

          n     �q n ����(-1)  m ���A�ìۭ� 
        C    = ____________________________
          m                m !
     */
    if (n > m) {
        int index = 0;
        if (n / 2 < m) {
            index = n - m;
        }else {
            index = m;
        }
        long n_array[index];
        long m_num = factorial((long) index);
        
        // �Ʋ� n
        for (int i = 0; i < index; i++) {
            n_array[i] = n;
            n--;
        }

        long n_num = 1, result = 0;
        for (int i = 0; i < index; i++) {
            n_num *= n_array[i];
        }
        result = n_num / m_num;
        cout<<"���G: "<<result<<endl;
    }
    else {
        cout<<"��J���~"<<endl;
    }
}

// "�ƦC"�զX �B��Ÿ� P
void perm(int n , int m) {
    /*
    �����p�U:

          n         n !
        P    = _____________
          m     ( n - m ) !
     */
    if (n > m) {
        long m_num = (long) (n - m);
        long m_perm = factorial(m_num);
        long n_perm = factorial(n);

        cout<<"���G: "<<(n_perm / m_perm)<<endl;
    }
    else {
        cout<<"��J���~"<<endl;
    }
}

// ���j�Ҥl: ����
long factorial(long number) {
    if (number == 1) {
        return number = 1;
    }
    else {
        return number * factorial(number - 1);
    }
}



