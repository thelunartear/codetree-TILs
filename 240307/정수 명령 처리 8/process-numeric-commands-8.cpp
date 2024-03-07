#include <iostream>
#include <list>
using namespace std;

int main() {
    int n;
    cin>>n;

    list<int> l;
    for(int i=0;i<n;i++)
    {
        string command;
        cin>>command;
        if(command=="push_back")
        {
            int val;
            cin>>val;
            l.push_back(val);
        }
        else if(command=="push_front")
        {
            int val;
            cin>>val;
            l.push_front(val);
        }
        else if(command=="pop_front")
        {
            cout<<l.front()<<endl;
            l.pop_front();
        }
        else if(command=="pop_back")
        {
            cout<<l.back()<<endl;
            l.pop_back();
        }
        else if(command=="size")
        {
            cout<<l.size()<<endl;
        }
        else if(command=="empty")
        {
            cout<<l.empty()<<endl;
        }
        else if(command=="front")
        {
            cout<<l.front()<<endl;
        }
        else if(command=="back")
        {
            cout<<l.back()<<endl;
        }
    }
    return 0;
}