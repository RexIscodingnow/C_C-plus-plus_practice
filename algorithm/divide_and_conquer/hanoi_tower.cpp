#include <iostream>
#include <vector>
#include "../../dataStructure_C++/array/vector_arr.h"


using namespace std;

void hanoi_towers(int disks, char from, char aux, char end);

void move(vector<int> &src, vector<int> &tar);
void dfs(int i, vector<int> &src, vector<int> &buf, vector<int> &tar);


int main(int argc, char const *argv[]) {

    vector<int> disks(3, {0}), buf, tar;

    arange<int>(disks, 1, true);
    
    cout << "1 ~ " << disks.size() << " :" << endl << endl;

    cout << "A : ";

    print_vector<int>(disks);
    cout << "------------------------------" << endl << endl;

    dfs(disks.size(), disks, buf, tar);

    cout << "------------------------------" << endl << endl;
    cout << "A : ";
    print_vector<int>(disks);
    cout << "C : ";
    print_vector<int>(tar);

    
    return 0;
}


/* �ǲθѪk */
void hanoi_towers(int disks, char from, char aux, char end) {
    if (disks == 1){
        cout << "Move disk " << disks <<" from" << from <<" to "<< end << endl;
	}

	else {
        hanoi_towers(disks - 1, from, end, aux);
	    
        cout << "Move disk " << disks << " from" << from << " to " << end << endl;

        hanoi_towers(disks - 1, aux, from, end);
	}
}


/* ���ʤ@�Ӷ�L */
void move(vector<int> &src, vector<int> &tar) {
    // �q src �������X�@�Ӷ�L
    int pan = src.back();

    src.pop_back();
    
    // �N��L��J tar ����
    tar.push_back(pan);
}

/* �D�Ѫe������D f(i) */
void dfs(int i, vector<int> &src, vector<int> &buf, vector<int> &tar) {
    // �Y src �u�ѤU�@�Ӷ�L�A�h�����N�䲾�� tar
    if (i == 1) {
        move(src, tar);
        return;
    }

    cout << "A : ";
    print_vector<int>(src);
    cout << "B : ";
    print_vector<int>(buf);
    cout << "C : ";
    print_vector<int>(tar);

    // �l���D f(i-1) �G�N src ���� i-1 �Ӷ�L�ǧU tar ���� buf
    dfs(i - 1, src, tar, buf);
    
    cout << "A : ";
    print_vector<int>(src);
    cout << "B : ";
    print_vector<int>(buf);
    cout << "C : ";
    print_vector<int>(tar);

    // �l���D f(1) �G�N src �Ѿl�@�Ӷ�L���� tar
    move(src, tar);

    // �l���D f(i-1) �G�N buf ���� i-1 �Ӷ�L�ǧU src ���� tar
    dfs(i - 1, buf, src, tar);

    cout << "A : ";
    print_vector<int>(src);
    cout << "B : ";
    print_vector<int>(buf);
    cout << "C : ";
    print_vector<int>(tar);
}

