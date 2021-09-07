

//C++ Program
//Check Prime or Not
#include<iostream>
using namespace std;
int main()
{
    int i,num,div=0;        //initializing variables
    cin>>num;           //user input
    for(i=1;i<=num;i++)     //checking for number of divisor
    {
        if(num%i==0)
        {
            div++;              
        }
    }
    if(div==2)          //no divisors other than 1 and itself
    {
        cout<<num<<" is a prime number";
    }
    else
    {
        cout<<num<<" is not a prime number";
    }
    return 0;
}





// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     if((n%n==0) && (n%2!=0) && (n%5!=0) || (n==2) || (n==5))
//     {
//         cout<<n<<" is prime  Number";
//     }
//     else
//     {
//         cout<<n<<" is not prime number";
//     }
//     return 0;
// }