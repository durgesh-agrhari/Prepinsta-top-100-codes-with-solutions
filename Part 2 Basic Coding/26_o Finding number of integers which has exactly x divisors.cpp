#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[4];
    cin>>n;
    for(int i=0; i<4; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<=4; i++)
    {
        if(n%arr[i]==0)
        {
            cout<<"hii = "<<arr[i]<<endl;
        }
    }
    return 0;

}