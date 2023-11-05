#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int compare(int a, int b)
{
    return a > b;
}

int main()
{
    int T, token;
    vector<int> arr;
    string s;
    cin >> T;
    cin.ignore();
    for (int i = 0; i < T; i++)
    {
        getline(cin, s);
        stringstream ss(s);
        while (ss >> token)
            arr.push_back(token);
        sort(arr.begin(), arr.end(), compare);
        cout << arr[2] << endl;
        arr.clear();
    }
    return 0;
}