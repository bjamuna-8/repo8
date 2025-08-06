// dp_fibonacci.cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> dp;

int fibonacci(int n) {
    if (n <= 1) return n;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return dp[n];
}

int main() {
    int n = 10;
    dp.assign(n + 1, -1);

    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;

    return 0;
}
