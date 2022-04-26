#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

//inline function
int minimum(int m, int n)
{
  return m < n ? m : n;
}
int maximum(int m, int n)
{
  return m > n ? m : n;
}

int maxSubarrayProduct(int arr[], int n)
{
  int max = 1; //max_ending_here
  int min = 1; //min_ending_here
  int MAXIMUM = 1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > 0)
    {
      max = max * arr[i];
      min = minimum(min * arr[i], 1);
    }
    else if (arr[i] == 0)
    {
      max = 1;
      min = 1;
    }
    else
    {
      int temp = max;
      max = maximum(min * arr[i], 1);
      min = temp * arr[i];
    }
    if (MAXIMUM < max)
      MAXIMUM = max;
  }
  return MAXIMUM;
}

int main()
{
  int n;

  cin >> n;
  int array[10];

  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
  }
  cout << "Maximum product : " << maxSubarrayProduct(array, n);
  return 0;
}

// // C++ program to find Maximum Product Subarray
//   #include <bits/stdc++.h>
//   using namespace std;

//   int maxSubarrayProduct(int arr[], int n){
//   int max_ending_here = 1;
//   int min_ending_here = 1;
//   int max_so_far = 0;
//   int flag = 0;

//   for (int i = 0; i < n; i++){ if (arr[i] > 0) {
//   max_ending_here = max_ending_here * arr[i];
//   min_ending_here = min(min_ending_here * arr[i], 1);
//   flag = 1;
//  }
//   else if (arr[i] == 0) {
//   max_ending_here = 1;
//   min_ending_here = 1;
//  }
//   else {
//    int temp = max_ending_here;
//    max_ending_here = max(min_ending_here * arr[i], 1);
//    min_ending_here = temp * arr[i];
//  }

//   //  update max_so_far, if needed
//   if (max_so_far < max_ending_here)
//   max_so_far = max_ending_here;
//  }
//    if (flag == 0 && max_so_far == 0)
//     return 0;
//   return max_so_far;
//  }

//   int main(){
//   int n;
//   cout<<"Enter size of array element ";
//   cin>>n;
//   int arr[100];
//   cout<<"Enter the elements of the array \n";
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   cout << "Maximum Sub array product is "<< maxSubarrayProduct(arr, n);
//   return 0;