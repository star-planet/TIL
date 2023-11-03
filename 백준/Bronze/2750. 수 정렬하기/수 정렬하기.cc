#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int N, num, temp;
    vector<int> arr;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        arr.push_back(num);
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}