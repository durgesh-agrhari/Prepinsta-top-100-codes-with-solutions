#include<iostream>
using namespace std;
int main()
{
    int num, i, fact=1;
    cin>>num;
    for(i=num; i>=1; i--)
        fact = fact*i;
    cout<<"\nFactorial = "<<fact;
    cout<<endl;
    return 0;
}



// //C++ Program
//     //Factorial of a number
//     #include<iostream>
//     using namespace std;
//     //main program
//     int main()
//     {
//         //initializing variables
//         int fact=1,num;
//         cin>>num;
//         //checking for negative input
//         if(num<0)
//             cout<<"Invalid input!!\nEnter whole numbers only";
//         // for positive numbers
//         else
//         {
//             for(int i=num; i>0; i–)
//             {
//                 fact*=i;
//             }
//             cout<<"Factorial of "<<num<<"is "<<fact;
//         }
//         return 0;
//     }