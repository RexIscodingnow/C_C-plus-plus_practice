/**
 * @file general.h
 * @version 0.1
 * @date 2023-04-12
 * 
 * @copyright Copyright (c) 2023
 * 
 * @brief �ƧǪk (for noob)
 * @details �ϥΤ��Ѽƫ��O: Reference of vector
 */

#include <iostream>
#include <vector>

using namespace std;


template<typename T>
void exChange(T &data_1, T &data_2);

// =========================================================
// =========================================================

template<typename T>
void bubble_sort(vector<T>& data);

template<typename T>
void selection_sort(vector<T>& data);

template<typename T>
void insert_sort(vector<T>& data);

// �W��
// Time Complexity ���a���p: O (n ^ 2)
// Space Complexity �Ҭ�: O(1)
// =========================================================

template<typename T>
void quick_sort(vector<T>& data, int left, int right);

template<typename T>
void merge_sort(vector<T>& data);

template<typename T>
void _merge_sort(vector<T>& data, int low, int high);

template<typename T>
void merge(vector<T>& data, int low, int mid, int high);

// �洫�ƭ�
template<typename T>
void exChange(T &data_1, T &data_2) {
    T temp = data_1;
    data_1 = data_2;
    data_2 = temp;
}



// �w�j�ƧǪk => O(n ^ 2)
template<typename T>
void bubble_sort(vector<T>& data) {
    /*
        �A�γ���: ��ƶq�p
        algorthim �覡: �ɤO�ѡB�g�k�ҿ� (����...)
     */
    for (int i = 0; i < data.size(); i++) {
        for (int j = 0; j < data.size(); j++) {
            if (data[i] < data[j]) {
                exChange<T>(data[i], data[j]);
            }
        }
    }
}

// ��ܱƧǪk => O(n ^ 2)
template<typename T>
void selection_sort(vector<T>& data) {
    /*
        �A�γ���: ��ƶq�p

        algorithm �覡: 
     */
    for (int i = 0; i < data.size(); i++) {
        int min_index = i;  // ��e�̤p�Ȫ����ޭ� (���μЬ�)

        for (int j = i+1; j < data.size(); j++) {   // �ƹL����m���ΦA����
            // ��Ь�p�A�N�󴫼Ь���ޭ�
            if (data[j] < data[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {   // �Ь�P�n�洫�̡A���ޭȭ��|����
            exChange<T>(data[i], data[min_index]);
        }
    }
}


template<typename T>
void insert_sort(vector<T>& data) {
    /*
        �A�γ���: �j�����H�ƧǪ̾A��
     */
}

// �ֳt�ƧǪk => O(n log n)
template<typename T>
void quick_sort(vector<T>& data, int left, int right) {
    /*
        : param data: �ƧǸ��
        : param left: ������� (�������A���ҳB��m)
        : param right: �k����t (�������A���ҳB��m)

        algorithm �覡: divide and conquer
                        -- ���v�k�A�Υs�� ���Ӥ��v���t��k
     */
    if (left >= right) {   // ������ޭȶW�L�k�� (�t�۹J)�A�N���۱Ʀn�A���_����
        // print_vector<T>(data);
        return;
    }
    
    int i = left;   // ����A��U���
    int j = right;  // �k��A��U���
    T pivot = data[left];   // �Ь�A����ǭ�

    while (i != j) {
        while (data[j] >= pivot && i < j) {   // ��Ь�j�A������a�l
            j--;
        }
        while (data[i] <= pivot && i < j) {   // ��Ь�p�A���k��a�l
            i++;
        }
        
        if (i < j) {
            T temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    // �󴫼Ь�A�Ȭ���e����䪺�ƭȡA���洫
    data[left] = data[i];
    data[i] = pivot;

    // ��������ϰ�
    // 1. ���b��ƭȰ��p
    // 2. �k�b��ƭȰ��j
    quick_sort<T>(data, left, i-1);   // ���b��A�������Y
    quick_sort<T>(data, i+1, right);  // �k�b��A���k���Y
}


template<typename T>
void merge_sort(vector<T>& data) {
    _merge_sort<T>(data, 0, data.size());
}

template<typename T>
void _merge_sort(vector<T>& data, int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        // int mid = (low + high) / 2;

        _merge_sort<T>(data, low, mid);
        _merge_sort<T>(data, mid+1, high);

        merge<T>(data, low, mid, high);
        print_vector<int>(data);
    }
}


template<typename T>
void merge(vector<T>& data, int low, int mid, int high) {
    int left_size = mid - low + 1;
    int right_size = high - mid;

    vector<T> left;
    vector<T> right;

    // ���t���k����
    for (int i = 0; i < left_size; i++) {
        left.push_back(data[low + i]);
    }
    for (int i = 0; i < right_size; i++) {
        right.push_back(data[mid + i + 1]);
    }

    // merge
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < left_size && j < right_size) {
        if (left[i] < right[j]) {
            data[k] = left[i];
            i++;
        } else {
            data[k] = right[j];
            j++;
        }
    
        k++;
    }

    // �٦��ѤU�� (left or right)
    while (i < left_size - 1) {
        data[k] = left[i];
        i++;
        k++;
    }

    while (j < right_size - 1) {
        data[k] = right[j];
        j++;
        k++;
    }
}

