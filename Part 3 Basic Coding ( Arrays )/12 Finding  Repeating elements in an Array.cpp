#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s; // declare size of array
    
    //cout << “Enter size of array :” << endl;
    
    cin >> s;
    
    int arr[s]; // declare array
    
    //cout << “Enter elements of array :” << endl;
    
    for(int i=0; i<s; i++)  // input elements of an array
    {
        cin >> arr[i];
    }
    
    //cout << “Duplicate elements are :” << endl;
    int a=s-1;
    for(int i=0; i<a; i++) // loop to traverse array
    {
        for(int j=i+1; j<s; j++) // loop to compare elements 
        {
            if(arr[i]==arr[j] && i!=j) // compare duplicates when i not equals j
              cout << arr[i] << " ";
        }
    }
    
    return 0;
}




// #include<bits/stdc++.h>
// #include<vector>
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
//     sort(arr, arr + n);
//     int count=0;
//     for(int i=0; i<n; i++)
//     {
//         while ( arr[i] == arr[i + 1]){
//             i++;
//         }
//         count++;
//         cout<<arr[i]<<" ";
//     }
// }