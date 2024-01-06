#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();
    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        getline(cin, S[i]);
    }
    for (int i = 0; i < S.size(); i++)
    {
        string token;
        stringstream ss(S[i]);

        while (ss >> token)
        {
            for (int i = token.size() - 1; i >= 0; i--)
            {
                cout << token[i];
            }
            cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}