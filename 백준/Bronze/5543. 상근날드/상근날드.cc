#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int Price;
    vector<int> Burger(3);
    vector<int> Drink(2);
    for (int i = 0; i < 5; i++)
    {
        if (i > 2)
        {
            cin >> Drink[i % 2];
        }
        else
        {
            cin >> Burger[i];
        }
    }
    sort(Burger.begin(), Burger.end());
    sort(Drink.begin(), Drink.end());

    cout << Burger[0] + Drink[0] - 50;
    return 0;
}