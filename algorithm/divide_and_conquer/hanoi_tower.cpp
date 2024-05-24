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


/* 傳統解法 */
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


/* 移動一個圓盤 */
void move(vector<int> &src, vector<int> &tar) {
    // 從 src 頂部拿出一個圓盤
    int pan = src.back();

    src.pop_back();
    
    // 將圓盤放入 tar 頂部
    tar.push_back(pan);
}

/* 求解河內塔問題 f(i) */
void dfs(int i, vector<int> &src, vector<int> &buf, vector<int> &tar) {
    // 若 src 只剩下一個圓盤，則直接將其移到 tar
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

    // 子問題 f(i-1) ：將 src 頂部 i-1 個圓盤藉助 tar 移到 buf
    dfs(i - 1, src, tar, buf);
    
    cout << "A : ";
    print_vector<int>(src);
    cout << "B : ";
    print_vector<int>(buf);
    cout << "C : ";
    print_vector<int>(tar);

    // 子問題 f(1) ：將 src 剩餘一個圓盤移到 tar
    move(src, tar);

    // 子問題 f(i-1) ：將 buf 頂部 i-1 個圓盤藉助 src 移到 tar
    dfs(i - 1, buf, src, tar);

    cout << "A : ";
    print_vector<int>(src);
    cout << "B : ";
    print_vector<int>(buf);
    cout << "C : ";
    print_vector<int>(tar);
}

