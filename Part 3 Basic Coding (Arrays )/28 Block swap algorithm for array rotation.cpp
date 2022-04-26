#include <bits/stdc++.h>
using namespace std;

/*Prototype for swap functions */
void swap(int arr[], int fi, int si, int d);


void Rotate(int arr[], int p, int n)
{
    /* Return If number of elements to be rotated 
    is zero or equal to array size */
    if(p == 0 || p == n)
        return;


    /*If number of elements to be rotated
    is exactly half of array size */
    if(n - p == p)
    {
        swap(arr, 0, n - p, p);
        return;
    }


    /* If A is shorter*/       
    if(p < n - p)
    {
        swap(arr, 0, n - p, p);
        Rotate(arr, p, n - p);    
    }
    else /* If B is shorter*/       
    {
        swap(arr, 0, p, n - p);
        Rotate(arr + n - p, 2 * p - n, p); 
    }
}


/*This function swaps d elements starting at index fi
with p elements starting at index si */
void swap(int arr[], int fi, int si, int p)
{
    int i, temp;
    for(i = 0; i < p; i++)
    {
        temp = arr[fi + i];
        arr[fi + i] = arr[si + i];
        arr[si + i] = temp;
    }
}


// Driver Code
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7,8};
    Rotate(arr, 2, 8);


    for(int i=0; i<8; i++)
    cout<<arr[i]<<" ";


    return 0;
}