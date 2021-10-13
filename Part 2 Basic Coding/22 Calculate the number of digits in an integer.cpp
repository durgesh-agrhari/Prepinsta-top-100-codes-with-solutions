// #include <iostream>
// using namespace std;
// ///Main Function
// int main()
// {
//     long long n, count = 0, temp, i;
//     cin >> n;
//     for (i = 0; i < n; i++)
//     {
//         temp = n % 10;
//         count++;
//         n = n / 10;
//     }
//     cout << count << " ";
//     return 0;
// }



#include<iostream>
using namespace std;

int main()
{

int num,digit=0;
cout<<"Enter any num : ";
cin>>num;
do
{
num=num/10;
digit++;
}
while(num!=0);
cout<<"Number of digits in the given integer is: "<<digit;
return 0;
}