#include <iostream>
using namespace std;

// Recursive function
void fun(int n) {
    if (n > 0) {
        cout << n << endl;
        fun(n - 1);
    }
}

// Another recursive function
void fun2(int n) {
    if (n > 0) {
        cout << n << endl;
        fun2(n - 1);
    }
}

// Driver code
int main() {
    fun(3);
    return 0;
}
