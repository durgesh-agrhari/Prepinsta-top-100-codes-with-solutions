#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
	int maxend = 0, maxso = INT_MIN;
	for (int i = 0; i < n; i++) {
		
		// include current element to previous subarray only
		// when it can add to a bigger number than itself.
		if (arr[i] <= maxend + arr[i]) {
			maxend += arr[i];
		}
		  
		// Else start the max subarray from current element
		else {
			maxend = arr[i];
		}
		if (maxend > maxso)
			maxso = maxend;
	}
	return maxso;
} // contributed by Vipul Raj

int main()
{
    int n, i, j, k;
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int res =  maxSubarraySum(a, n);
    cout<<res<<endl;
 
    return 0;
}






// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, i, j, k;
//     cin >> n;
//     int a[n];

//     for (i = 0; i < n; i++)
//         cin >> a[i];
        
//     int sum, msum = 0; 
//     for (i = 0; i < n; i++)
//     {
//         for (j = i; j < n; j++)
//         {
//             sum = 0;
//             for (k = i; k <= j; k++)
//             {
//                 sum += a[k];
//             }
//             msum = max(msum, sum);
//         }
//     }
//     cout << msum << endl;
//     return 0;
// }