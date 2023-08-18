#include <iostream>
#include <string.h>
#include <string>
#include <typeinfo>

using namespace std;

/* 引入區: 自訂標頭檔 */

#include "array_function.h"


int main(int argc, char const *argv[]) {
    /* pointer-pointer of array */

    // Pointer_Array ptr_arr;
    // ptr_arr.prointer_and_array();


    // int numbers[5];
    // arange(numbers, 5);
    // print_array(numbers, 5);

    int col;
    int row;
    
    // cout<<"col => ";
    // cin>>col;
    // cout<<"row => ";
    // cin>>row;
    int twoDimensional[col][row];

    // int arr_1D[row];
    // arange(arr_1D, row);
    // print_array(arr_1D, row);

    /* ----------------------------------------------- */
    /* ----------------------------------------------- */
    /* ----------------------------------------------- */

    int *arr_2D[col];
    for (int i = 0; i < col; i++) {
        arr_2D[i] = twoDimensional[i];
    }

    arange(arr_2D, col, row);
    print_array(arr_2D, col, row);

    // int array_1D[col * row];
    // int index = 0;
    // for (int i = 0; i < col; i++) {
    //     for (int j = 0; j < row; j++) {
    //         array_1D[index] = arr_2D[i][j];
    //         index++;
    //     }
    // }
    // print_array(array_1D, col*row);

    // int numbers[2][3] = {
    //     {1, 458, 65},
    //     {5, 598, 53}
    // };
    // int arr[6];
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         int index = i + j * 2;
    //         arr[index] = numbers[i][j];
    //     }
    // }
    // print_array(arr, 6);
    
    // int num;
    // cout<<"number => ";
    // cin>>num;
    
    // int remainder = 0, reverse_num = 0;
    // while (num != 0) {
    //     remainder = num % 10;
    //     reverse_num = reverse_num * 10 + remainder;
    //     num /= 10;
    //     cout<<"remainder = "<<remainder<<endl;
    //     cout<<"num = "<<num<<endl;
    // }
    // cout<<reverse_num<<endl;

    


    return 0;
}




