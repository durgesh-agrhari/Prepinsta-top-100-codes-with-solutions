
#include <iostream>
#include <math.h>
using namespace std;
long convert(int n)
{
  long binary = 0;
  int i = 1;
  //converting decimal to binary
  while (n != 0)
  {
    int rem = n % 2;
    n /= 2;
    binary += rem * i;
    i *= 10;
  }
  return binary;
}
int main()
{
  int decimal;
  long binary;
  cin >> decimal;
  //calling function
  binary = convert(decimal);
  cout << decimal << " " << binary << " " << endl;
  return 0;
}








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
// }