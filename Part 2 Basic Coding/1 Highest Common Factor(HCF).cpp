#include <iostream>
using namespace std;

int main() {
  int n1, n2, hcf;
  cin >> n1 >> n2;

  // swapping variables n1 and n2 if n2 is greater than n1.
  if ( n2 > n1) {   
    int temp = n2;
    n2 = n1;
    n1 = temp;
  }
    
  for (int i = 1; i <=  n2; ++i) {
    if (n1 % i == 0 && n2 % i ==0) {
      hcf = i;
    }
  }

  cout << "HCF = " << hcf;

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
