#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int a,b,c;
    cin>>a>>b>>c;

    int count=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                 if (abs(i - j) <= 2 || abs(j - k) <= 2 || abs(k - i) <= 2) 
                {
                    if (i != j && j != k && k != i) 
                    {
                        count++;
                    }
                }
            }
        }
    }

    cout<<count;

    return 0;
}