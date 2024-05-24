#include <iostream>


using namespace std;


int fib(int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}


int main(int argc, char const *argv[]) {

    int result = fib(5);
    cout << "n = 5 -> " << result <<endl;


    return 0;
}



