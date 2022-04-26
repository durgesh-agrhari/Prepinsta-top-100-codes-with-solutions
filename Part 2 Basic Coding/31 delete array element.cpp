#include<iostream>
using namespace std;
int main()
{
    int arr[10], n, i, det, j, found=0;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>arr[i];

    cin>>det;
    for(i=0; i<n; i++)
    {
        if(arr[i]==det)
        {
            for(j=i; j<(n-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            n--;
        }
    }
    if(found==0)
        cout<<"\nElement doesn't found in the Array! = ";
    else
        cout<<"\nElement Deleted Successfully! = ";

    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}