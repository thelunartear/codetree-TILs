#include <iostream>
#include <string>
using namespace std;

bool isPalindrom(long long num)
{
    string str=to_string(num);
    int n=str.length();
    for(int i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-i-1])
            return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    long long x,y;
    cin>>x>>y;
    int cnt=0;
    for(long long i=x;i<=y;i++)
    {
        if(isPalindrom(i))
        {
            cnt++;
        }
    }

    cout<<cnt;

    return 0;
}