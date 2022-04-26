#include <iostream>
 using namespace std;

 void sort(int arr[],int n){
 int temp=0;
 for(int i=0;i<n;i++){

 for(int j=0;j<n;j++){

 if(arr[i]<arr[j]){
   temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
   }
  }
 }
}

int main()
{
  int n;
  cout<<"Enter the size of the array :"; cin>>n;

  int arr1[n], arr2[n];

  cout<<"\nEnter the elements of first array :";
  for(int i=0; i<n;i++) cin>>arr1[i];

  cout<<"\nEnter the elements of second array :";
  for(int i=0; i<n;i++) cin>>arr2[i];

  sort(arr1, n); //sort first array
  sort(arr2, n); //sort second array
  int res =0 ; // variable to hold maximum scalar product

  for(int i=0; i<n; i++)
  res +=(arr1[i]*arr2[i]);

  cout<<"Maximum Scalar Product :"<< res;
  return 0;
}



// // C++ program to find maximum dot product of two array
// #include<bits/stdc++.h>
// using namespace std;

// // Function compute Maximum Dot Product and
// // return it
// long long int MaxDotProduct(int A[], int B[],
// 							int m, int n)
// {
// 	// Create 2D Matrix that stores dot product
// 	// dp[i+1][j+1] stores product considering B[0..i]
// 	// and A[0...j]. Note that since all m > n, we fill
// 	// values in upper diagonal of dp[][]
// 	long long int dp[n+1][m+1];
// 	memset(dp, 0, sizeof(dp));

// 	// Traverse through all elements of B[]
// 	for (int i=1; i<=n; i++)

// 		// Consider all values of A[] with indexes greater
// 		// than or equal to i and compute dp[i][j]
// 		for (int j=i; j<=m; j++)

// 			// Two cases arise
// 			// 1) Include A[j]
// 			// 2) Exclude A[j] (insert 0 in B[])
// 			dp[i][j] = max((dp[i-1][j-1] + (A[j-1]*B[i-1])) ,
// 							dp[i][j-1]);

// 	// return Maximum Dot Product
// 	return dp[n][m] ;
// }

// // Driver program to test above function
// int main()
// {
// 	int A[] = { 2, 3 , 1, 7, 8 } ;
// 	int B[] = { 3, 6, 7 } ;
// 	int m = sizeof(A)/sizeof(A[0]);
// 	int n = sizeof(B)/sizeof(B[0]);
// 	cout << MaxDotProduct(A, B, m, n);
// 	return 0;
// }
