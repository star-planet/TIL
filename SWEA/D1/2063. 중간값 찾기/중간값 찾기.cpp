#include<iostream>
#include<algorithm>
  
using namespace std;
  
int main(int argc, char** argv)
{
    int T, input[200];
    cin>>T;
    for(int i = 0; i <= T; ++i)
    {
        scanf("%d", &input[i]);
    }
    sort(input, input + T);
    cout <<  input[T/2] << endl;
    return 0;
}