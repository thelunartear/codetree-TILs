#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int maxCount = 0;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int diff = arr[j] - arr[i];
            int count = 2;
            int next = arr[j] + diff;
            for (int k = j + 1; k < n; ++k) 
            {
                if (arr[k] == next) 
                {
                    count++;
                    next += diff;
                }
            }
            maxCount = max(maxCount, count);
        }
    }
    cout<<maxCount<<endl;

    return 0;
}