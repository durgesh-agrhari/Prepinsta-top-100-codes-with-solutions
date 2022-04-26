#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,d;

	//input value of n and d
	//cout<<"Enter the value of n and d"<<endl;
	cin>>n>>d;
	int a[n];

	//input array elements
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	//print the elements of array after rotation
	cout<<"array elements after rotation : ";
	for(int i=0;i<n;i++)
	{
		cout<<a[(i+d)%n]<<" ";
	}

	return 0;
}
















// #include <bits/stdc++.h>

// using namespace std;

// void main(String[] args)

// {

//     //Initialize array

//     int arr[] = {6, 3, 9, 13, 10};

//     //n determine the number of times an array should be rotated

//     int rotations = 3;

//     //Displays elements of array

//     cout << "Original array: ";

//     for (int i = 0; i < 5; i++)
//     {

//         cout << arr[i] << " ";
//     }

//     int ch;

//     cout << "\nPress 0 for left shift and 1 for right shift";

//     cin >> ch;

//     switch (ch)

//     {

//     case 0:

//         //Rotate the given array by n times toward left

//         for (int i = 0; i < rotations; i++)
//         {

//             int j, temp;

//             //Stores the first element of the array

//             temp = arr[0];

//             for (j = 0; j < 4; j++)
//             {

//                 //Shift element of array by one

//                 arr[j] = arr[j + 1];
//             }

//             //First element of array will be added to the end

//             arr[j] = temp;
//         }

//         //Displays resulting elements of array after rotation

//         cout << "\nArray after left rotation: ";

//         for (int i = 0; i < 5; i++)
//         {

//             cout << arr[i] << " ";
//         }

//         break;

//     case 1:

//         //Rotate the given array by n times toward right

//         for (int i = 0; i < rotations; i++)
//         {

//             int j, temp;

//             //Stores the first element of the array

//             temp = arr[4];

//             for (j = 4; j > 0; j--)
//             {

//                 //Shift element of array by one

//                 arr[j] = arr[j - 1];
//             }

//             //First element of array will be added to the end

//             arr[j] = temp;
//         }

//         //Displays resulting elements of array after rotation

//         cout << "\nArray after right rotation: ";

//         for (int i = 0; i < 5; i++)
//         {

//             cout << arr[i] << " ";
//         }

//         break;
//     }
// }