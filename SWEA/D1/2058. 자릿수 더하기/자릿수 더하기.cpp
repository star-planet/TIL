#include<iostream>
  
using namespace std;

int cal(int n)
{
    if(n/10 == 0) return n%10;
    return n%10 + cal(n/10);
}
  
int main(int argc, char** argv)
{
    int T, result;
    cin>>T;
    cout <<  cal(T) << endl;
    return 0;
}