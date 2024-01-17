#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    string Number;
    cin >> N;
    cin >> Number;
    int Sum = 0;
    for(int i = 0; i < Number.length(); i++)
    {
        Sum += Number[i] - '0';
    }
    cout << Sum << '\n';
    return 0;
}