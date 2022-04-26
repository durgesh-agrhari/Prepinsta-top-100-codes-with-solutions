#include <vector>    
#include <algorithm>  
//visit www.ProDeveloperTutorial.com for 450+ solved questions  
#include <iostream>    
#include <queue>

using namespace std;

void palindrome(int arr[], int n) 
{ 
    // Loop the array till the mid n/2. 
    for (int i = 0; i <= n / 2 && n != 0; i++) 
    { 
        if (arr[i] != arr[n - i - 1]) 
        { 
            cout << "Array is Not Palindrome"<<endl; 
            return;
        } 
    } 
    cout << "Array is Palindrome"<<endl; 
    return;
} 
  
int main() 
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
  
    palindrome(arr, n); 
    return 0; 
}