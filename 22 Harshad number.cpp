#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int store = n;
    while (n != 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
     cout << sum <<" ";
    if(store%sum==0)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    
   
    return 0;
}
