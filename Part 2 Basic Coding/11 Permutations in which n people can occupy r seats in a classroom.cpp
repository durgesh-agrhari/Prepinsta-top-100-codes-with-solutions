#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r, fact1= 1, fact2= 1,i;
    cin >> n >> r;

    for (int i = n; i >= 1; i--)
        fact1 = fact1 * i;
    for (int i = (n-r); i >= 1; i--)
        fact2 = fact2 * i;
    
    int a = fact1 / fact2;
    cout << a <<" ";

    return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num,r, i, fact1=1,fact2=1;
//     cin>>num>>r;

//     for(i=num; i>=1; i--)
//         fact1 = fact1*i;
//     for(i=(num-r); i>=1; i--)
//         fact2 = fact2*i;    

//     //cout<<"\nFactorial = "<<fact1<<" "<<fact2;
//     cout<<endl;

//     int a=fact1/fact2;
//     cout<<a<<" ";
//     return 0;
// }




// //C++ Program
// //Permutations in which n people can occupy r seats
// #include <iostream>
// using namespace std;
// //function for factorial
// int factorial(int num)
// {
//     int fact = 1;
//     for (int i = num; i >= 1; i--)
//         fact *= i;
//     return fact;
// }
// //main program
// int main()
// {
//     int n, r;
//     // cout<<“Enter number of people: “;
//     //user input
//     cin >> n;
//     //cout<<“Enter number of seats: “;
//     //user input
//     cin >> r;
//     //if there are more people than seats
//     if (r < n)
//     {
//         cout << "Cannot adjust " << n << " people on " << r << " seats";
//         return 0;
//     }
//     //finding all possible arrangements of n people on r seats
//     // by using formula of permutation
//     int p = factorial(r) / factorial(n - r);
//     //printing output
//     cout << "Total arrangements: " << p;
//     return 0;
// }