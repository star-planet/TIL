#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case, T, input;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int result = 0;
        for (int i=0; i<10; i++)
        {
         	scanf("%d", &input);
            if(input % 2 == 1)
            {
                result += input;
            }
        }
        cout << "#" << test_case << " " << result << endl;
	}
	return 0;
}