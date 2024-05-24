#include <iostream>

using namespace std;


int fib(int n) {
    // array ver.
    // int seq[n + 1];
    
    // for (int i = 0; i <= n; i++) {
    //     seq[i] = 0;
    // }

    // seq[0] = 0;

    // if (n > 0) {
    //     seq[1] = 1;

    //     for (int i = 2; i <= n; i++) {
    //         seq[i] = seq[i - 1] + seq[i - 2];
    //     }

    //     for (int i = 0; i <= n; i++) {
    //         cout << seq[i] << " ";
    //     }
    //     cout << endl;
    // }

    // return seq[n];

    // two variable
    int first = 0, second = 1;

    for (int i = 0; i < n; i++) {
        second = first + second;
        first = second - first;
    }

    return first;
}


int main(int argc, char const *argv[]) {

    int result = fib(5);
    cout << "n = 5 -> " << result <<endl;


    return 0;
}
