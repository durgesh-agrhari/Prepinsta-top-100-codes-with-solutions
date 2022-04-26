#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;    // variable to store the size of the array
    int k;    // variable to store the position for rotation

    cout << "Enter the size of array : ";
    cin >> n;

    cout << "\nEnter the position for rotation : ";
    cin >> k;

    std::vector<int> A(n);    // declaring a vector of size n

    cout << "\nEnter the elements of the array : ";

    for (int i = 0; i < n; i++)
        cin >> A[i];

    k = (n - k) % n;    // set k to the index which comes first

    reverse(A.begin(), A.begin() + k);    //reverse the array from 0 to k position
    reverse(A.begin() + k, A.end());    //reverse the array from k to n-1 position
    reverse(A.begin(), A.end());    //reverse the array from 0 to n-1 position

    cout << "\nArray after rotation: ";

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;

}