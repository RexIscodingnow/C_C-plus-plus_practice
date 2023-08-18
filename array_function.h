/**
 * @file array_function.h
 * @brief 
 * @version 0.1
 * @date 2023-01-02
 * @copyright Copyright (c) 2023
 * 
 * @brief 陣列操作函式，遞增給值
 * 
 * 檔案內容: 指標參數  for 陣列操作
 */

#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

#include <typeinfo>



/* 函式宣告區 */

// 指標參數: 印出 一維陣列
void print_array(int *array, int row);
// 指標參數: 印出 二維陣列
void print_array(int **array_2D, int col, int row);

// 遞增給值: 一維陣列
void arange(int *array_1D, int row, int start=0);
// 遞增給值: 二維陣列
void arange(int **array_2D, int col, int row, int start=0);


// 指標參數: 2 維陣列，合併成 1 維陣列
int *merge_twoD_array(int **array_2D, int row_len, int col_len, string mode="row");




/* 函式執行區 */

void print_array(int *array, int row) {
    cout<<"1D array"<<endl;
    cout<<"-------------"<<endl;
    cout<<"{";
    for (int i = 0; i < row; i++) {
        if (i == row - 1) {
            cout<<array[i]<<"";
        }
        else {
            cout<<array[i]<<", ";
        }
    }
    cout<<"}"<<endl;
}
void print_array(int **array_2D, int col, int row) {
    cout<<"2D array"<<endl;
    cout<<"-------------"<<endl;
    // cout<<"{";
    for (int i = 0; i < col; i++) {
        // cout<<"{";
        for (int j = 0; j < row; j++) {
            if (j == row - 1) {
                cout<<array_2D[i][j]<<"}, ";
            }
            else {
                cout<<array_2D[i][j]<<", ";
            }
        }
        cout<<endl;
        // if (i > 0) {
        //     cout<<" "<<endl;
        // }
        // else if (i == col - 1) {
        //     cout<<"}"<<endl;
        // }
    }
}


void arange(int *array_1D, int row, int start) {
    int number = start;
    for (int i = 0; i < row; i++) {
        array_1D[i] = number;
        number++;
    }
}
void arange(int **array_2D, int col, int row, int start) {
    int number = start;
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            array_2D[i][j] = number;
            number++;
        }
    }
}



int *merge_twoD_array(int **array_2D, int row_len, int col_len, string mode) {
    cout<<"merge two dimensional array.\nmerge mode: "<<mode<<endl;
    
    int *array_1D;
    int index = 0;

    if (mode == "row") {
        for (int i = 0; i < col_len; i++) {
            for (int j = 0; j < row_len; j++) {
                array_1D[i] = array_2D[i][j];
            }
        }
    }
    else if (mode == "col") {
        // 
    }

    else {
        *array_1D = 0;
    }
    return array_1D;
}



class Pointer_Array {
    /**
     * @brief 變數、指標 與 陣列 之關係實作
     * @return 這裡的函式 都是 void
     */
    public:
        void print_Msg() {
            string message[] = {
                "Titles\n",
                "\t1. pointer VS variable, for example\n",
                "\t2. pointer VS array, for example\n",
                "\t3. pointer VS pointer array, for example\n"
            };

            cout<<"What are the variable, array and pointer differnce ?"<<endl
                <<"This class statement: 'Pointer_Array', to explain for it."<<endl<<endl;
            for (int i = 0; i < end(message) - begin(message); i++) {
                cout<<message[i]<<endl;
            }
        }

        void prointer_and_array() {
            print_Msg();
            short function_choose;
            char prefix_sentence[] = "You choose option is => Title ";
            cout<<prefix_sentence;
            cin>>function_choose;

            cout<<endl;
            switch (function_choose) {
                case 1:
                    pointer_variable();
                    break;
                case 2:
                    // pointer_array(1);
                    pointer_array(2);
                    break;
                case 3:
                    break;
                
                default:
                    cout<<"This option is not on the Titles."
                        <<"\tOr not setting the other function to operate.";
            }

        }

    private:
        void pointer_variable() {
            cout<<"Declare a int type variable val"<<endl;
            cout<<"Declare a int type pointer p"<<endl<<endl;
            int val = 1;
            int *p = &val;
            cout<<"variable val,  value => "<<val<<endl;
            cout<<"val,  memory address => "<<&val<<endl;
            cout<<"pointer p,  stored address => "<<p<<endl;
            cout<<"*p,  stored value => "<<*p<<endl;

            cout<<"-------------------------------------"<<endl;
            cout<<"-------------------------------------"<<endl;
            *p += 100;
            cout<<"*p, plus 100 => "<<*p<<endl;
            cout<<"pointer p, stored address => "<<p<<endl;
            cout<<"variable val, value => "<<val<<endl;
            cout<<"val, memory address => "<<&val<<endl;
        }
        

        void pointer_array(int dimension) {
            cout<<"ex: "<<dimension<<"D array"<<endl;

            switch (dimension) {
                case 1:
                    pointer_VS_1D_arr();
                    break;
                case 2:
                    pointer_VS_2D_arr();
                    break;

                default:
                    cout<<"Error parameter Or Not set this dimension introduction."<<endl;
                    break;
            }

        }
        void pointer_VS_1D_arr() {
            cout<<"declare an 1D array with length is 10"<<endl<<endl;
            int array[10];
            arange(array, 10, 1);
            print_array(array, 10);
            cout<<endl;

            int *p = array;
            // cout<<*(p + 2)<<endl;
            cout<<"declare pointer p, and recieve the array address"<<endl<<endl;

            for (int i = 0; i < 10; i++) {
                cout<<"&array ["<<i<<"] => "<<&array[i]
                    <<"\tp + "<<i<<" => "<<p + i<<endl;
            }
            cout<<endl;
            cout<<"use the pointer to get all values."<<endl<<endl;
            for (int i = 0; i < 10; i++) {
                cout<<"*(p + "<<i<<") => "<<*(p + i)
                    <<"\t*(array + "<<i<<") => "<<*(array + i)<<endl;
            }
            cout<<endl;
            cout<<"array => "<<array<<endl;
            cout<<"&array => "<<&array<<endl;
        }
        void pointer_VS_2D_arr() {
            cout<<"declare an 2D array with length is (2 x 3)"<<endl<<endl;
            int array[2][3];
            int *array_2d[6];   // 生成用的 參數，目標函式 => arrange();
            for (int i = 0; i < 2; i++) {
                array_2d[i] = array[i];
            }
            arange(array_2d, 2, 3, 1);
            print_array(array_2d, 2, 3);
        }
};

