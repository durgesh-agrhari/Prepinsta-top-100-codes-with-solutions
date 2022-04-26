#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int d= 0, i = 0, r,n;
    cin>>n;
    while (n!=0)
    {
        r = n%10;
        n /= 10;
        d=d+r*pow(2,i);
        i++;
    }
    cout<< d;
}
// #include <iostream>
// #include <cmath>

// using namespace std;

// int convertBinaryToDecimal(long long);

// int main()
// {
//     long long n;

//     cout << "Enter a binary number: ";
//     cin >> n;
 
//     cout << n << " in binary = " << convertBinaryToDecimal(n) << "in decimal";
//     return 0;
// }

// int convertBinaryToDecimal(long long n)
// {
//     int decimalNumber = 0, i = 0, remainder;
//     while (n!=0)
//     {
//         remainder = n%10;
//         n /= 10;
//         decimalNumber += remainder*pow(2,i);
//         ++i;
//     }
//     return decimalNumber;
// }





// #include <iostream>
// #include <math.h>
// #include <vector>
// using namespace std;
// //function to convert binary to decimal

// //main program
// int main()
// {
//     vector<int> v; int n; cin>>n;
//      int y; y=n;
    
//     for(int i=1;i<=n;i=i*2)
//      {
//         int x = y%2; 
       
//        if(y!=1)
//          y = y/2;

//         v.push_back(x);
        
//      }

//      for(auto it=v.end(); it>=v.begin();it--)
//        {
//            cout<<*it;
//        }
//     return 0;
//}

//    //C++ Program
//     //Convert binary to decimal
//     #include <iostream>
//     #include <math.h>
//     using namespace std;
//     //function to convert binary to decimal
//     int convert(long n)
//     {
//         int i = 0,decimal= 0;
//         //converting binary to decimal
//         while (n!=0)
//         {
//             int rem = n%10;
//             n /= 10;
//             int res = rem * pow(2,i);
//             decimal += res;
//             i++;
//         }
//         return decimal;
//     }
//     //main program
//     int main()
//     {
//         long binary;
//        // cout << “Enter binary number: “;
//         cin >> binary;
//         cout << binary << " in binary = " << convert(binary) << " in decimal";
//         return 0;
//     }



