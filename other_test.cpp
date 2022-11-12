/*
    J 個檔案是作為「測試執行區」

    ex: 排列組合的 C 幾取幾 ( 上 n 下 m )
            執行測試狀況

    執行環境: VScode && C++
 */
#include <iostream>
#include <stdlib.h>
#include <string.h>  // strcmp(str1, str2) --> 字串相同，返回值為 0 ; 反之，則 返回值為其他數值
#include <time.h>

#include "otherThing.h"

using namespace std;

void comb(int n, int m);
void perm(int n, int m);
long factorial(long number);

int main(int argc, char const *argv[]) {
    // 原先是長這樣
    // std::cout<<"hello world!"<<std::endl;  // 不使用 using namespace std;
    
    // 使用了，命名空間 std
    // cout<<"hello"<<endl;
    
    int n, m;
    bool running = false;
    char str[20];

    cout<<"排列組合 C，輸入: \"comb\", \"C\"(大小寫都可) "<<endl<<"排列組合 P，輸入: \"perm\", \"P\"(大小寫都可) "<<endl;
    cout<<"機會或命運 (Chance or Destiny)，輸入: \"Chance or Destiny\", \"run dice\", \"dice\""<<endl<<endl;
    
    while (running != true) {
        cout<<"=> ";
        gets(str);
        if (!strcmp(str, "comb") || !strcmp(str, "c") || !strcmp(str, "C")) {
            running = true;
            cout<<"排列組合，運算代號 C"<<endl<<"n (上) 取 m (下)"<<endl;
            cout<<"n = ";
            cin>>n;
            cout<<"m = ";
            cin>>m;

            comb(n, m);
        }
        else if (!strcmp(str, "perm") || !strcmp(str, "p") || !strcmp(str, "P")) {
            running = true;
            cout<<"排列組合，運算代號 P"<<endl<<"n (上) 取 m (下)"<<endl;
            cout<<"n = ";
            cin>>n;
            cout<<"m = ";
            cin>>m;

            perm(n, m);
        }
        else if (!strcmp(str, "Chance or Destiny") || !strcmp(str, "run dice") || !strcmp(str, "dice")) {
            running = true;
            int score;
            cout<<"輸入分數 => ";
            cin>>score;
            chance_or_destiny(score);
        }
        else {
            running = false;
        }
    }

    return 0;
}

// 排列"組合" 運算符號 C (上 n 取 m，我都叫 C n 取 m)
void comb(int n, int m) {
    /*
    公式如下:

          n     從 n 遞減(-1)  m 次，並相乘 
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
        
        // 數組 n
        for (int i = 0; i < index; i++) {
            n_array[i] = n;
            n--;
        }

        long n_num = 1, result = 0;
        for (int i = 0; i < index; i++) {
            n_num *= n_array[i];
        }
        result = n_num / m_num;
        cout<<"結果: "<<result<<endl;
    }
    else {
        cout<<"輸入有誤"<<endl;
    }
}

// "排列"組合 運算符號 P
void perm(int n , int m) {
    /*
    公式如下:

          n         n !
        P    = _____________
          m     ( n - m ) !
     */
    if (n > m) {
        long m_num = (long) (n - m);
        long m_perm = factorial(m_num);
        long n_perm = factorial(n);

        cout<<"結果: "<<(n_perm / m_perm)<<endl;
    }
    else {
        cout<<"輸入有誤"<<endl;
    }
}

// 遞迴例子: 階乘
long factorial(long number) {
    if (number == 1) {
        return number = 1;
    }
    else {
        return number * factorial(number - 1);
    }
}



