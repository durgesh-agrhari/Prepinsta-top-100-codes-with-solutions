// Program to remove duplicate elements from an array

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, k, n;
    cin >> n;
    int num[n];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (num[i] == num[j])
            {
                for (k = j; k < n; k++)
                {
                    num[k] = num[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    cout << "\nDISTINCT ELEMENTS: " <<endl;
    //sort(num, num + n); if ytou want sort

    for (i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}
