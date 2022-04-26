// //Cpp Code to find prime number between 1 to 100
// #include <iostream>
// using namespace std;
// ///Main Function
// int main()
// {
//     int i, j, count = 0;

//     //Print prime number between 1 to 100
//     cout << "print prime number between 1 to 100\n";

//     //For loop for printing values between 1 to 100
//     for (i = 2; i <= 100; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             if (i % j == 0)
//                 count++;
//         }
//         if (count == 2)
//             cout << " " << i;
//         else{
//             count = 0;
//         }
//     }
//     return 0;
// }






#include <iostream>
using namespace std;

void prime(int num)
{

    int div = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            div++;
    }
    if (div == 2)
        cout << num <<" ";
}

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
        prime(i);
    return 0;
}
