#include <iostream>
using namespace std;
int main()
{
    int a, b, lcm;
    cin >> a >> b;
    if (a > b)
        lcm = a;
    else
        lcm = b;
    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            cout << "LCM  " << lcm;
            break;
        }
        lcm++;
    }
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// int gcd(int a,int b)
// {
//     if(a==0)
//        return b;
//     return gcd(b%a, a);
// }

// int lcm(int a,int b)
// {
//     return (a*b)/gcd(a,b);
// }

// int main()
// {
//       int n,m,gcd,i;
//       cin>>n>>m;
//       cout<<lcm(n,m);
// }
