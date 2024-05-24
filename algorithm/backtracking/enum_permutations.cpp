/**
 * @file enum_order.cpp
 * @date 2024-05-23
 * 
 * @brief 列舉所有 1 ~ n 的組合順序
 */


#include <iostream>

using namespace std;



/**
 * @brief 列舉所有 1 ~ n 的順序排列
 * 
 * @param solutions 儲存結果 (空的陣列)
 * @param is_filled 紀錄是否以加入順序
 * @param n         陣列大小
 * @param num       當前排入的數值
 * 
 * Complexity:
 *              - time: O(n!)
 *              - space: O(1)
 */
void enumerate_nums(int* solutions, bool* is_filled, int n, int num, int &cnt) {
    // 從 0 開始
    // if (n == num) {
    
    // 從 1 開始
    if (n == num - 1) {
        cnt++;

        for (int i = 0; i < n; i++) {
            cout << solutions[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!is_filled[i]) {
            is_filled[i] = true;
            solutions[i] = num;


            enumerate_nums(solutions, is_filled, n, num + 1, cnt);

            // backtracking
            is_filled[i] = false;
        }
    }
}


/**
 * @brief 列舉所有指定陣列的順序排列
 * 
 * @param arr       進行排列順序的指令陣列
 * @param solutions 紀錄排列情況 (空陣列)
 * @param used      紀錄是否以加入順序
 * @param n         陣列大小
 * @param idx       當前寫入的位置
 * 
 * Complexity:
 *              - time: O(n!)
 *              - space: O(1)
 */
void enum_arr_permutations(int* arr, int* solutions, bool* used, int n, int idx = 0) {
    if (n == idx) {
        for (int i = 0; i < n; i++) {
            cout << solutions[i] << " ";
        }

        cout << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            used[i] = true;
            solutions[idx] = arr[i];

            enum_arr_permutations(arr, solutions, used, n, idx + 1);

            used[i] = false;
        }
    }
}


int main(int argc, char const *argv[]) {
    int n, cnt = 0;

    cout << "Enumerate all permutations from 1 to n" << endl;
    cout << endl << "n = ";
    cin >> n;

    int solutions[n];
    bool is_filled[n];

    for (int i = 0; i < n; i++) {
        is_filled[i] = false;
    }

    enumerate_nums(solutions, is_filled, n, 1, cnt);

    cout << endl << cnt << endl;

    // n = 5;
    // int nums[n] = {1, 2, 5, 8, 9}, solutions_2[n];
    // bool used[n];

    // for (int i = 0; i < n; i++) {
    //     used[i] = false;
    // }

    // enum_arr_permutations(nums, solutions_2, used, n);


    return 0;
}

