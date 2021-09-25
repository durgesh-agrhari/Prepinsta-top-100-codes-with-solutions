#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum==n)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}