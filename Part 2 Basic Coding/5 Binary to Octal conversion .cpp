 //C++ Program
    //binary to octal conversion
    #include <iostream>
    #include <math.h>
    using namespace std;
    //Function to convert binary to octal
    int convert(long binary)
    {
        int octal = 0, decimal = 0, i = 0,rem;
        //converting binary to decimal
        while(binary != 0)
        {
            rem = binary % 10;
            int res = rem * pow(2,i);
            decimal += res;
            i++;
            binary/=10;
        }
        i = 1;
        //converting decimal to octal
        while (decimal != 0)
        {
            rem = decimal % 8;
            octal += rem * i;
            decimal /= 8;
            i *= 10;
        }
        return octal;
    }
    //main program
    int main()
    {
        long binary;
        //user input
        cin >> binary;
        //calling function
        int octal=convert(binary);
        //printing output
        cout << binary <<" "<< octal;
        return 0;
    }





// #include <iostream>
// #include <math.h>
// #include <vector>
// using namespace std;
// //function to convert binary to decimal
// int convertBinaryToDecimal(long long);


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


// //main program
// int main()
// {
//   vector<int> v;
//   int m;
//   cin >> m;

//   int n = convertBinaryToDecimal(m);
//   int y;
//   y = n;

//   for (int i = 1; i <= n; i = i * 8)
//   {
//     int x = y % 8;
//     if (y != 1)
//       y = y / 8;
//     v.push_back(x);
//   }

//   for (auto it = v.end(); it >= v.begin(); it--)
//   {
//     cout << *it;
//   }
//   return 0;
// }