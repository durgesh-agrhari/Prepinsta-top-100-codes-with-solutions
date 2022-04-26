#include<bits/stdc++.h>
using namespace std;

bool isPalindrome (int N)
{ // function to check whether a number is Palindrome or not

  int rev = 0, rem;

  int temp = N;

  while (temp)
    {
      rem = temp % 10;
      rev = rev * 10 + rem;
      temp /= 10;
    }

  if (N == rev)
    return 1;

  return 0;
}

int main ()
{

  int N;			// variable for size of the array

  cout << "Enter the size of the array: ";
  cin >> N;

  int A[N];			// Declaration of an array of size N
    
  cout << "\nInput the elements of the array: ";
 
  for (int i = 0; i < N; i++)
    cin >> A[i];

  sort (A, A + N);		// Sort the array A in ascending order

  int result;			// variable that store the final output

  for (int i = 0; i < N; i++)
    {

      // check every ith value is Palindrome or not

      if (isPalindrome (A[i]))
	result = A[i];

    }

  cout << "\nThe longest palindrome number is : " << result;

  return 0;
}



// // C++ implementation of above approach
// #include <bits/stdc++.h>
// using namespace std;

// // Function to check if n is palindrome
// bool isPalindrome(int n)
// {
// 	// Find the appropriate divisor
// 	// to extract the leading digit
// 	int divisor = 1;
// 	while (n / divisor >= 10)
// 		divisor *= 10;

// 	while (n != 0) {
// 		int leading = n / divisor;
// 		int trailing = n % 10;

// 		// If first and last digits are
// 		// not same then return false
// 		if (leading != trailing)
// 			return false;

// 		// Removing the leading and trailing
// 		// digits from the number
// 		n = (n % divisor) / 10;

// 		// Reducing divisor by a factor
// 		// of 2 as 2 digits are dropped
// 		divisor = divisor / 100;
// 	}
// 	return true;
// }

// // Function to find the largest palindromic number
// int largestPalindrome(int A[], int n)
// {

// 	// Sort the array
// 	sort(A, A + n);

// 	for (int i = n - 1; i >= 0; --i) {

// 		// If number is palindrome
// 		if (isPalindrome(A[i]))
// 			return A[i];
// 	}

// 	// If no palindromic number found
// 	return -1;
// }

// // Driver program
// int main()
// {
// 	int A[] = { 1, 232, 54545,11111,121, 999991 };
// 	int n = sizeof(A) / sizeof(A[0]);

// 	// print required answer
// 	cout << largestPalindrome(A, n);

// 	return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// void insertionsort(int arr[],int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         int count=1;
//         for(int j=i+1; j<n; j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 count++;
//             }
//         }
//     cout<<arr[i]<<" "<<count<<" "<<endl;
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
//     return 0;

// }
