#include <iostream>
using namespace std;

long long fibo[50] = { 0, 1, };

long long fibonacci(int n) {
    if (n == 0 || n == 1)
        return fibo[n];
    else if (fibo[n] == 0)
        fibo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return fibo[n];
}

int main()
{
    int t, input;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> input;
        if (input == 0)
            cout << fibo[1] << ' ' << fibo[0] << '\n';
        else
            cout << fibonacci(input - 1) << ' ' << fibonacci(input) << '\n';
    }
}