#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int Sum = 0;
    vector<int> Array(9);
    bool bFound = false;
    for (int i = 0; i < Array.size(); i++)
    {
        cin >> Array[i];
        Sum += Array[i];
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (Array[i] + Array[j] == Sum - 100)
            {
                Array[i] = 100;
                Array[j] = 100;
                bFound = true;
                break;
            }
        }
        if (bFound)
            break;
    }
    sort(Array.begin(), Array.end());
    for (int i = 0; i < 7; i++)
    {
        cout << Array[i] << '\n';
    }
    return 0;
}