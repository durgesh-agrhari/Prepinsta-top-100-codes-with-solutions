// //C++ Program
//     //Number expressed as sum of two prime numbers
//     #include<iostream>
//     using namespace std;
//     // Function to check prime number
//     int Prime(int num)
//     {
//         int div=0;
//         for(int i=2;i<=num;i++)
//         {
//             if(num%i==0)
//                 div++;                
//         }
//         if(div==2)
//             return 1;
//         return 0;
//     }
//     int main()
//     {
//         int check = 0, n;
//         //cout<< “Enter a positive integer: “;
//         //user input
//         cin>>n;
//         for(int i = 1; i <= n/2;i++)
//         {
//                 // condition for i to be a prime number
//                 if (Prime(i))
//                 {
//                         // condition for n-i to be a prime number
//                         if (Prime(n–i))
//                         {
//                             cout<<n <<" = "<< i <<" + " << n–i<< endl;
//                             check = 1;
//                         }
//                 }    
//         }
//         if (check == 0)
//                 cout<<n<<" cannot be expressed as the sum of two prime numbers.";
//         return 0;
//     }


#include <iostream>
using namespace std;
bool checkPrime(int n);

int main() {
    int n, i;
    bool flag = false;

    cout << "Enter a positive  integer: ";
    cin >> n;

    for(i = 2; i <= n/2; ++i) {
        if (checkPrime(i)) {
            if (checkPrime(n - i)) {
                cout<<endl << n << " = " << i << " + " << n-i;
                flag = true;
            }
        }
    }

    if (!flag)
      cout << n << " can't be expressed as sum of two prime numbers."<<endl;

    return 0;
}

// Check prime number.
bool checkPrime(int n) {
    int i;
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for(i = 2; i <= n/2; ++i) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}