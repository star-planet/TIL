#include <iostream>
#include <string>
using namespace std;

int main()
{
    while (1)
    {
        string S;
        getline(cin, S);
        if (S == "END") break;
        for (int i = S.size() - 1; i >= 0; i--)
        {
            cout << S[i];
        }
        cout << '\n';
    }
    return 0;
}