#include <iostream>
#include <algorithm>
#include <climits>
#include <cstdlib>

using namespace std;

int skills[6];

int Diff(int i, int j, int k, int l)
{
    int total_sum=0;
    for(int l=0;l<6;l++)
    {
        total_sum+=skills[l];
    }

    int sum1=skills[i]+skills[j];
    int sum2=skills[k]+skills[l];
    int sum3=total_sum-sum1-sum2;

    int diff=abs(sum1-sum2);
    diff=max(diff, abs(sum2-sum3));
    diff=max(diff, abs(sum3-sum1));

    return diff;
}

int main() {
    for(int i=0;i<6;i++)
    {
        cin>>skills[i];
    }

    int min_diff=INT_MAX;

    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            for(int k=0;k<6;k++)
            {
                for(int l=k+1;l<6;l++)
                {
                    if(k==i||k==j||l==i||l==j)
                    {
                        continue;
                    }
                    min_diff=min(min_diff, Diff(i,j,k,l));
                }
            }
        }
    }

    cout<<min_diff;

    return 0;
}