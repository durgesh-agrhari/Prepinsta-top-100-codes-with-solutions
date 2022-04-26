#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    int arr[n];
    for (i = 1; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 1; i <= n; i++)
    {
        //cout<<arr[i]<<" "<<i<<endl;
        if(arr[i] != i)
        {
            cout<<i<<endl;
            break;
        }  

    }
    return 0;
}