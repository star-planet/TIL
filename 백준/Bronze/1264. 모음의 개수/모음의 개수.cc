#include <iostream>
#include <string>
using namespace std;

int main()
{
    while (1)
    {
        string S;
        getline(cin, S);
        if (S == "#")
            break;
        int num = 0;
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
                num++;
            if (S[i] == 'A' || S[i] == 'E' || S[i] == 'I' || S[i] == 'O' || S[i] == 'U')
                num++;
        }
        cout << num << '\n';
    }
    return 0;
}