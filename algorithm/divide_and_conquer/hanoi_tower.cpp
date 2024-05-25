#include <iostream>
#include <vector>
#include "../../dataStructure_C++/array/vector_arr.h"


using namespace std;

void hanoi_towers(int disks, char from, char aux, char end);

void move(vector<int> &src, vector<int>& buf, vector<int> &tar);
void dfs(int i, vector<int> &src, vector<int> &buf, vector<int> &tar);


int main(int argc, char const *argv[]) {

    vector<int> disks(3, {0}), buf, tar;

    arange<int>(disks, 1, true);    // from 1 ~ n
    
    cout << "1 ~ " << disks.size() << " :" << endl << endl;
    
    cout << "A (src) : ";
    print_vector(disks);
    cout << "B (buf) : ";
    print_vector(buf);
    cout << "C (tar) : ";
    print_vector(tar);
    cout << "------------------------------" << endl << endl;

    dfs(disks.size(), disks, buf, tar);

    cout << "------------------------------" << endl << endl;
    cout << "A (src) : ";
    print_vector(disks);
    cout << "B (buf) : ";
    print_vector(buf);
    cout << "C (tar) : ";
    print_vector(tar);

    
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

/**
 * @brief ���ʤ@�Ӷ�L
 * 
 * @param src �_�l�I
 * @param buf �Ȧs�I (�L���ʾާ@�A�[��ʹL�{)
 * @param tar ���I
 */
void move(vector<int> &src, vector<int>& buf, vector<int> &tar) {
    // �q src �������X�@�Ӷ�L
    int pan = src.back();

    src.pop_back();
    
    // �N��L��J tar ����
    tar.push_back(pan);

    // �L�X��e���A
    cout << "A : ";
    print_vector(src);
    cout << "B : ";
    print_vector(buf);
    cout << "C : ";
    print_vector(tar);
    cout << "------------------------------" << endl;
}


/**
 * @brief �D�Ѫe������D f(i)
 * 
 * @param i   �Ѿl�ƶq
 * @param src �_�l�I
 * @param buf ���~�I (�Ȧs�I)
 * @param tar ���I
 */
void dfs(int i, vector<int> &src, vector<int> &buf, vector<int> &tar) {
    // �Y src �u�ѤU�@�Ӷ�L�A�h�����N�䲾�� tar
    if (i == 1) {
        move(src, buf, tar);
        return;
    }

    // �l���D f(i-1) �G�N src ���� i-1 �Ӷ�L�ǧU tar ���� buf
    dfs(i - 1, src, tar, buf);

    // �l���D f(1) �G�N src �Ѿl�@�Ӷ�L���� tar
    move(src, buf, tar);

    // �l���D f(i-1) �G�N buf ���� i-1 �Ӷ�L�ǧU src ���� tar
    dfs(i - 1, buf, src, tar);
}

