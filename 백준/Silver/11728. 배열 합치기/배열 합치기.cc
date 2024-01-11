#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<int> ArrayA(N + M);
    for (int i = 0; i < N; i++)
    {
        cin >> ArrayA[i];
    }
    for (int i = 0; i < M; i++)
    {
        cin >> ArrayA[i + N];
    }
    sort(ArrayA.begin(), ArrayA.end());
    for (int i : ArrayA)
    {
        cout << i << ' ';
    }
    return 0;
}