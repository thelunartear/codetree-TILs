#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int n;
string cmd[100000];
int k[100000];
int v[100000];
unordered_map<int, int> um;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> cmd[i];
        cin >> k[i];
        if (cmd[i] == "add") 
        {
            cin >> v[i];
            um[k[i]]=v[i];
        }
        else if(cmd[i] == "remove")
        {
            um.erase(k[i]);
        }
        else if(cmd[i] == "find")
        {
            if(um.count(k[i]))
            {
                cout<<um[k[i]]<<"\n";
            }
            else
            {
                cout<<"None\n";
            }
        }
    }

    return 0;
}
