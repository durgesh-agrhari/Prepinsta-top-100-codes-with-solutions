#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int p=0; p<n-1; p++)
    {
        for(int j=p+1; j<n; j++)
        {
            if(arr[j]<arr[p])
            {
                int temp = arr[j];
                arr[j]= arr[p];
                arr[p]= temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
    return 0;

}
