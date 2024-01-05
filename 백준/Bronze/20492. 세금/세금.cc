#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int Money1 = N * 0.78;
    int Money2 = (N * 0.8) + ((N * 0.2) * 0.78);
    cout << Money1 << ' ' << Money2;
    return 0;
}