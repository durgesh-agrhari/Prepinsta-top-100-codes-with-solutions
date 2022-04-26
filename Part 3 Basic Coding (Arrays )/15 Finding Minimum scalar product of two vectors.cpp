// C Program to find the minimum scalar product of two vectors (dot product)
#include <iostream>
using namespace std;

int sort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }    
    }  
    return arr[j+1];
}

int sort_des(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }    
    }  
    return arr[j+1];
}
// int sort_des(int arr[], int n)
// {
//     int i, j;
//     for (i = 0; i < n; ++i)
//     {
//         for (j = i + 1; j < n; ++j)
//         {
//             if (arr[i] < arr[j])
//             {
//                 int a = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = a;
//             }
//         }
//     }
//     return arr[j];
// }

int main()
{
    //fill the code;
    int n;
    cin >> n;

    int arr1[n], arr2[n];
    int i;

    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    sort(arr1, n);
    sort_des(arr2, n);
    int sum = 0;
    cout << " Minimum scalar product of Vector 1 and Vector 2 = ";

    for (i = 0; i < n; i++)
    {
        sum = sum + (arr1[i] * arr2[i]);
    }
    cout << sum;
    return 0;
}