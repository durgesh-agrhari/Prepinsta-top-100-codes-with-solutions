#include <iostream>
using namespace std;
void symmetric_array_pair(int arr1[], int arr2[], int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (arr1[i] == arr2[j] && arr1[j] == arr2[i])
			{
				cout << "(" << arr1[i] << "," << arr1[j] << ")"<< "\t";
				continue;
			}
		}
	}
}

int main()
{
	int m, n;
	cout << "Enter the value of m and n";
	cin >> m >> n;
	int i, j;
	int arr1[m], arr2[n];

	for (i = 0; i < m; i++)
	{
		cin >> arr1[i];
	}

	for (i = 0; i < m; i++)
	{
		cin >> arr2[i];
	}

	symmetric_array_pair(arr1, arr2, m, n);
	return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// // A C++ program to find all symmetric pairs in a given array of pairs
// // Print all pairs that have a symmetric counterpart
// void findSymPairs(int arr[][2], int row)
// {
// 	// Creates an empty hashMap hM
// 	unordered_map<int, int> hM;

// 	// Traverse through the given array
// 	for (int i = 0; i < row; i++)
// 	{
// 		// First and second elements of current pair
// 		int first = arr[i][0];
// 		int sec = arr[i][1];

// 		// If found and value in hash matches with first
// 		// element of this pair, we found symmetry
// 		if (hM.find(sec) != hM.end() && hM[sec] == first)
// 			cout << "(" << sec << ", " << first << ")" <<endl;

// 		else // Else put sec element of this pair in hash
// 			hM[first] = sec;
// 	}
// }

// // Driver method
// int main()
// {
// 	int arr[5][2];
// 	arr[0][0] = 11; arr[0][1] = 20;
// 	arr[1][0] = 30; arr[1][1] = 40;
// 	arr[2][0] = 5; arr[2][1] = 10;
// 	arr[3][0] = 40; arr[3][1] = 30;
// 	arr[4][0] = 10; arr[4][1] = 5;
// 	findSymPairs(arr, 5);
// }

// //This is contributed by Chhavi
