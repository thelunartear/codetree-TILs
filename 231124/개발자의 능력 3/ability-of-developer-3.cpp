#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int GetDiff(int i, int j, int arr[]) {
    int sum1 = arr[i] + arr[j];
    int sum2 =  0;
    for(int k = 0; k < 6; k++)
        sum2 += arr[k];
    sum2 -= sum1;
    return abs(sum1 - sum2);
}


int main() {
    int arr[6];

    for(int i=0;i<6;i++)
    {
        int a;
        cin>>a;
        arr[i]=a;
    }

    int min_diff=INT_MAX;

    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            min_diff=min(min_diff, GetDiff(i,j,arr));
        }
    }

    cout<<min_diff;

    return 0;
}