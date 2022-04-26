#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
       cout<<arr[i]<<" ";
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// void insertionsort(int arr[],int n)
// {
//     int key,i,j;
//     for(int i=1; i<n; i++)
//     {
//         key = arr[i];
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
// }

// int main()
// {
//     int n; cin>>n; 
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     insertionsort(arr,n);
//     display(arr,n);
//     return 0;

// }