#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    int arr[n];
    int k; 
    cin>>k;
    for (i = 1; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for (i = 1; i <= k; i++)
    {
        cout<<arr[k-1]<<endl;
        break;
    }
    return 0;
}


