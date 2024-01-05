#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char Input;
    cin >> Input;
    if (Input == 'N' || Input == 'n')
    {
        cout << "Naver D2";
    }
    else
    {
        cout << "Naver Whale";
    }
    return 0;
}