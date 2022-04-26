// C++ program to find smallest and
// second smallest elements
#include <bits/stdc++.h>
using namespace std; /* For INT_MAX */

void print2Smallest(int arr[], int n)
{
	int i, first, second;

	/* There should be atleast two elements */
	if (n < 2)
	{
		cout<<" Invalid Input ";
		return;
	}

	first = second = INT_MAX;
	for (i = 0; i < n ; i ++)
	{
		/* If current element is smaller than first
		then update both first and second */
		if (arr[i] < first)
		{
			second = first;
			first = arr[i];
		}

		/* If arr[i] is in between first and second
		then update second */
		else if (arr[i] < second && arr[i] != first)
			second = arr[i];
	}
	if (second == INT_MAX)
		cout << "There is no second smallest element\n";
	else
		cout  << first << " , " << second << endl;
}

/* Driver code */
int main()
{
	// int arr[] = {12, 13, 2, 10, 34, 1};
	// int n = sizeof(arr)/sizeof(arr[0]);

	int n; cin>>n; 
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	print2Smallest(arr, n);

	return 0;
}

// This is code is contributed by rathbhupendra














// #include <bits/stdc++.h>
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

//     int min = arr[0];
//     for(int i=1; i<n; i++)
//     {
//         if(arr[i]<min)
//         {
//             min =arr[i];
//         }
//     }
//     cout<<min<<" ";
//     return 0;
// }




// // #include <bits/stdc++.h>
// // #include<vector>
// // using namespace std;


// // int main()
// // {
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0; i<n; i++)
// //     {
// //         cin>>arr[i];
// //     }
// //     sort(arr,arr+n);
// //     cout<<arr[0]<<" ";
// //     return 0;
// // }