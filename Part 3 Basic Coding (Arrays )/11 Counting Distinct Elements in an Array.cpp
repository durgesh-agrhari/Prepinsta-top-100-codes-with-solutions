// CPP program to count occurrences of an
// element in an unsorted array
#include<iostream>
using namespace std;

int frequency(int a[], int n, int x)
{
	int count = 0;
	for (int i=0; i < n; i++)
	if (a[i] == x)
		count++;
	return count;
}

// Driver program
int main() {
	int a[] = {0, 5, 5, 5, 4};
	int x = 5;
	int n = sizeof(a)/sizeof(a[0]);
	cout << frequency(a, n, x);
	return 0;
}




// #include <algorithm>
// #include <iostream>
// using namespace std;
// int distinct_elements(int arr[], int n){
//    // Sorting the array
//    sort(arr, arr + n);
//    // Traverse the sorted array
//    int count = 0;
//    for (int i = 0; i < n; i++){
//       // Moving the index when duplicate is found
//       while (i < n - 1 && arr[i] == arr[i + 1]){
//          i++;
//       }
//       count++;
//    }
//    return count;
// }
// // Main Function
// int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0; i<n; i++)
//    {
//       cin>>arr[i];
//    } 
//    cout <<"count is "<<distinct_elements(arr, n);
//    return 0;
// }




// #include <algorithm>
// #include <iostream>
// using namespace std;
// int distinct_elements(int arr[], int n)
// {
//    int count=0;
//    for (int i = 0; i < n; i++)
//    {
     
//       for(int j=i+1; j<n; j++)
//       {
//          if(arr[i]==arr[j])
//          {
//             count = 0;
//          }
//          count++;
//       }
//    }
//    int a = n-count;
//    return a;

// }
// // Main Function
// int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0; i<n; i++)
//    {
//       cin>>arr[i];
//    } 
//    cout <<"count is "<<distinct_elements(arr, n);
//    return 0;
// }