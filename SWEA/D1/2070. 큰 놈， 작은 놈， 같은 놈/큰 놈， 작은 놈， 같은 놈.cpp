#include<iostream>
 
using namespace std;
 
int main(int argc, char** argv)
{
    int test_case, T, a, b;
    cin>>T;
    for(test_case = 1; test_case <= T; ++test_case)
    {
        scanf("%d %d", &a, &b);
        if(a>b) cout << "#" << test_case << " " << ">" << endl;
        else if(a<b) cout << "#" << test_case << " " << "<" << endl;
        else cout << "#" << test_case << " " << "=" << endl;
    }
    return 0;
}