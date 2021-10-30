// Program to remove duplicate elements from an array

#include <iostream>

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

    cout << "\nDISTINCT ELEMENTS: ";

    for (i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}
