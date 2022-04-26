#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,j,key; 
    cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i++)
    {
        key=arr[i];
        j=i-1;
        while(arr[j]>=0 && arr[j]>key)
        {
            arr[j+1]= arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }


    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// void insertionsort(int arr[], int n)
// {
//     int i,j,key;
//     for(i=0; i<n; i++)
//     {
//         key= arr[i];
//         j=i-1;
//         while(j>=0 && arr[j]>key)
//         {
//             arr[j+1]=arr[j];
//             j=j-1;
//         }
//         arr[j+1]=key;
//     }
// }

// void display(int arr[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<" \n";
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     insertionsort(arr,n);
//     display(arr,n);
// }