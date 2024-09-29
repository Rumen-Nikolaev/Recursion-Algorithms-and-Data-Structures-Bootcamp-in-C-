#include <iostream>
using namespace std;

int factorial(int n) {

    if(n == 0) {
        cout << "This is the base case " << n << endl;
        return 1;
    }

    cout << "Before recursion " << n << endl;
    int res = n * factorial(n-1);
    cout << "After recursion " << res << endl;

    return res;
}

int fact(int n, int acc) {

    if(n == 0) {
        cout << "This is the base case " << acc << endl;
        return acc;
    }

    cout << "Before recursion " << n << endl;
    int res = fact(n-1, n * acc);
    cout << "After recursion " << res << endl;

    return res;
}

int main() {

    cout << factorial(4) << endl;
    return 0;
}
