#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    char* ch = new char[M];
    for (int i = 0; i < N; i++)
    {
        cin >> ch;
        for (int j = M - 1; j >= 0; j--)
        {
            cout << ch[j];
        }
        cout << '\n';
    }
    return 0;
}