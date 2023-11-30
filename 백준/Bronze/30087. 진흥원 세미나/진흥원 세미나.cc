#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        string topic;
        cin >> topic;
        if (topic == "Algorithm")
            cout << "204" << endl;
        else if (topic == "DataAnalysis")
            cout << "207" << endl;
        else if (topic == "ArtificialIntelligence")
            cout << "302" << endl;
        else if (topic == "CyberSecurity")
            cout << "B101" << endl;
        else if (topic == "Network")
            cout << "303" << endl;
        else if (topic == "Startup")
            cout << "501" << endl;
        else
            cout << "105" << endl;
    }
    return 0;
}