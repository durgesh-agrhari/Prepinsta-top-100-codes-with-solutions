
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

//     for(int i=1;i<=n;i=i*8)
//      {
//         int x = y%8;

//        if(y!=1)
//          y = y/8;

//         v.push_back(x);

//      }

//      for(auto it=v.end(); it>=v.begin();it--)
//        {
//            cout<<*it;
//        }
//     return 0;
// }

//C++ Program
//decimal to octal conversion
#include <iostream>
#include <math.h>
using namespace std;
int convert(int decimal)
{
  int i = 1, octal = 0;
  while (decimal != 0)
  {
    int rem = decimal % 8;
    decimal /= 8;
    octal += rem * i;
    i *= 10;
  }
  return octal;
}
int main()
{
  int decimal, octal;
    cin >> decimal;
  octal = convert(decimal);
  cout <<octal<<" ";
  return 0;
}
