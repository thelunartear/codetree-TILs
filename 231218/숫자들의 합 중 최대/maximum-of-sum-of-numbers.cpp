#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x, y;
    cin>>x>>y;

    int ans=0;

    for(int i=x;i<=y;i++)
    {
        string str = to_string(i);

        int digit_num=0;
        for(char s : str)
        {
            digit_num += s-'0';
        }
        ans = max(ans, digit_num);
    }

    cout<<ans;

    return 0;
}