#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    int sum=0;
    for (i = 1; i < n; i++)
    {
        sum=n*(n+1)/2;
    }
    cout<<sum;

    return 0;
}


