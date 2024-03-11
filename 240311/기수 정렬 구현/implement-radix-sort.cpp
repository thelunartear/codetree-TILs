#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
	    if (max < arr[i])
	    {
		    max = arr[i];
	    }
    }

    int exp = 1;
    int *tmp = new int[n];
    while (max / exp > 0)
    {
        int bucket[10] = {0};

        for (int i = 0; i < n; i++)
        {
            bucket[arr[i] / exp % 10]++;
        }

        for (int i = 1; i < 10; i++)
        {
            bucket[i] += bucket[i - 1];
        }

        for (int i = n - 1; i >= 0; i--)
        {
            tmp[--bucket[arr[i] / exp % 10]] = arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            arr[i] = tmp[i];
        }

        exp *= 10;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}