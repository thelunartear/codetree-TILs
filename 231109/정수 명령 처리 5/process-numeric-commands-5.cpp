#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string command;
        cin>>command;

        if(command=="push_back")
        {
            int b;
            cin>>b;
            v.push_back(b);
        }
        if(command=="pop_back")
        {                
            v.pop_back();
        }
        if(command=="size")
        {
            cout<<v.size()<<endl;
        }
        if(command=="get")
        {
            int b;
            cin>>b;
            if(b<=v.size())
                cout<<v[b-1]<<endl;
        }
    }
    return 0;
}