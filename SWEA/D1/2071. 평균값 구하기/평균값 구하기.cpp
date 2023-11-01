#include<iostream>
#include<cmath>
 
using namespace std;
 
int main(int argc, char** argv)
{
    int test_case, T, input;
    cin>>T;
    for(test_case = 1; test_case <= T; ++test_case)
    {
        float result = 0;
        for (int i=0; i<10; i++)
        {
            scanf("%d", &input);
            result += input;
        }
        result /= 10;
        cout << "#" << test_case << " " << round(result) << endl;
    }
    return 0;
}