#include <iostream>
using namespace std;

int main()
{
    string id;
    string emoticon[3][3];
    cin >> id;
    emoticon[1][1] = id;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 1 && j == 1)
            {
                emoticon[i][j] = ':' + id + ':';
            }
            else
            {
                emoticon[i][j] = ":fan:";
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << emoticon[i][j];
        }
        cout << '\n';
    }
    return 0;
}