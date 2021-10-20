#include<bits/stdc++.h>
using namespace std;

bool isPalindrome (int N)
{				// function to check whether a number is Palindrome or not
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
  int N; cin >> N;

  int A[N];	
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

  cout << "longest palindrome number is : " << result;
  return 0;
}





// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, i;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int rev = 0;
//     int store = arr[i];
//     for (int i = 0; i < n; i++)
//     {
//         while (arr[i] != 0)
//         {
//             int r = arr[i] % 10;
//             rev = rev * 10 + r;
//             arr[i] = arr[i] / 10;
//         }
//     }
//     // cout<<rev<<" ";
//     if (store == rev)
//     {
//         cout << rev << " palendron hai";
//     }
//     else
//     {
//         cout << " no";
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void insertionsort(int arr[],int n)
// {
//     int i,j, key;
//     for(int i=0; i<n; i++)
//     {
//         key=arr[i];
//         j=i-1;
//         while (j>=0 && arr[j]>key)
//         {
//             arr[j+1]=arr[j];
//             j=j-1;
//         }
//         arr[j+1]= key;
//         cout<<arr[i]<<" ";
//         cout<<arr[n-1];
//     }
// }

// void display(int arr[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<endl;
//     cout<<arr[n-1];
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
//     //display(arr,n);
//     return 0;

// }
