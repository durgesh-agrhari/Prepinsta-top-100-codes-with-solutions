#include <bits/stdc++.h>
using namespace std;
int main()
{
    int hash[123] = {0}; // initialize hash array to 0
    int s; // declare size of array
   //cout << “Enter the size of array : “ << endl;
    cin >> s;
    int arr[s]; // declare array
    int count = 0; // count distinct elements
    
   // cout << “Enter elements of array : “ << endl;
    for(int i=0; i<s; i++)
    {
        cin >> arr[i];
    }
    cout << "Distinct Elements : " << endl;
    for(int i=0; i<s; i++)
    {
        if(hash[arr[i]]==0)
        {
            hash[arr[i]] = 1;  // increment flag 
            cout << arr[i] << " ";  // display distinct elements
            count++;   // increment counter variable
        }
    }
    return 0;
}
