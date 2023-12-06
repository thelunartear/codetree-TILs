#include <iostream>
#include <algorithm>
#include <climits>
#include <cstdlib>

using namespace std;

int skills[5];

int Diff(int i, int j, int k, int l)
{
    int total_sum=0;
    for(int i=0;i<5;i++)
    {
        total_sum+=skills[i];
    }

    int sum1=skills[i]+skills[j];
    int sum2=skills[k]+skills[l];
    int sum3=total_sum-sum1-sum2;

    if(sum1==sum2 || sum2==sum3 || sum3== sum1)
        return -1;

    int diff=abs(sum1-sum2);
    diff=max(diff, abs(sum2-sum3));
    diff=max(diff, abs(sum3-sum1));   

    return diff;
}

int main() {
    for(int i=0;i<5;i++)
    {
        cin>>skills[i];
    }

    int min_diff=INT_MAX;
    bool flag = true;

    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            for(int k=0;k<5;k++)
            {
                for(int l=k+1;l<5;l++)
                {
                    if(k==i||k==j||l==i||l==j)
                    {
                        continue;
                    }
                    if(Diff(i,j,k,l) != -1)
                    {
                        min_diff=min(min_diff, Diff(i,j,k,l));
                        flag=false;
                    }
                }
            }
        }
    }


    if(flag)
        cout<<-1;
    else
        cout<<min_diff;

    return 0;
}