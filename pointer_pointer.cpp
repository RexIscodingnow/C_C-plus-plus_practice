/*
    1. ���Ъ�����
    2. void ����
    3. ���Ъ��}�C
 */

#include <iostream>
using namespace std;


int main(int argc, char const *argv[]) {
    // ���Ъ����СA�ŧi�覡
    int **a;
    a = new int*;  // ���� ���Ъ��O�����}
    
    *a = new int;  // �x�s���� �� �O�����}�̭� �s�� int �O����Ŷ�
    **a = 10;

    cout<<a<<endl;
    cout<<*a<<endl;
    cout<<**a<<endl;
    
    cout<<"-----�ڬO���j�u-----"<<endl;

    int *b = new int;
    *b = 20;
    a = &b;   // ����� b ���O�����} ������ a
    cout<<**a<<endl;

    // void ����
    void *v;
    v = b;
    cout<<b<<endl;
    cout<<v<<endl;
    cout<<*b<<endl;
    cout<<*((int*)v)<<endl;  // void ���Ш��ȡA�n��(�j��)�ഫ���O

    cout<<"-----�ڬO���j�u-----"<<endl;

    // ���Ъ��}�C�A�ŧi�覡
    int *array[10];
    for (int i = 0; i < 10; i++) {
        /*
            ���ŧi�A�A����
         */
        array[i] = new int;
        *array[i] = i + 1;
    }
    for (int i = 0; i < 10; i++) {
        cout<<*array[i]<<endl;
    }

    cout<<"-----�ڬO���j�u-----"<<endl;

    // �ʺA���а}�C�A�ϥΫ��Ъ�����
    int **p_array;
    p_array = new int*[10];
    for (int i = 0; i < 10; i++) {
        p_array[i] = new int;
        *p_array[i] = i + 1;
    }
    for (int i = 0; i < 10; i++) {
        cout<<*p_array[i]<<endl;
    }

    return 0;
}
