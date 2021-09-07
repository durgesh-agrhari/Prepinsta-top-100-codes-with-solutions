#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
    {
        cout << n << " is leap  Number";
    }
    else
    {
        cout << n << " is not leap number";
    }
    return 0;
}