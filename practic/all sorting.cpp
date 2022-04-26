
//insertion sot 

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

    for(int i=0; i<n-1; i++)
    {
        for( int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}





// //insertion sot 

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }

//     for(int i=0; i<n; i++)
//     {
//         int key = arr[i];
//         int j= i-1;
//         while (arr[j]>0 && arr[j]>key)
//         {
//             arr[j+1]= arr[j];
//             j=j-1;
//         }
//         arr[j+1] = key;
//     }

//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// //bubble sort

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }

//     for(int i=0; i<n; i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if(arr[i] > arr[j])
//             {
//                 int temp = arr[i];
//                 arr[i]= arr[j];
//                 arr[j] =  temp;
//             }
//         }
//     }

//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }