#include<bits/stdc++.h>
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
    int eve=0, odd=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            eve++;
        }
        else
        {
           odd++;
        }
    }

    cout<<"Even number "<<eve <<endl<<"Odd number "<<odd;
    return 0;
}