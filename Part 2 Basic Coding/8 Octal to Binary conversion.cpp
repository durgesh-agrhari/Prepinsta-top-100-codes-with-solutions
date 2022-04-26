 //C++ Program
    // Octal to Binary conversion
    #include <iostream>
    #include <math.h>
    using namespace std;
    //Function to convert octal to binary
    long convert(int octal)
    {
        int decimal = 0, i = 0;
        long binary = 0;
        //converting octal to decimal
        while(octal != 0)
        {
            int rem = octal%10;
            int res=rem * pow(8,i);
            decimal += res;
            i++; 
            octal/=10;
        }
        i = 1;
        //converting decimal to binary
        while (decimal != 0)
        {
            int rem = decimal % 2;
            binary += rem * i;
            decimal /= 2;
            i *= 10;
        }
        return binary;
    }
    //main program
    int main()
    {
        int octal;
        //cout << “Enter an octal number: “;
        //user input
        cin >> octal;
        //function call
        long binary = convert(octal);
        //printing output 
        cout << octal <<" " << binary ;
        return 0;
    }


// //C++ Program
// //binary to octal conversion
// #include <iostream>
// #include <math.h>
// #include <vector>
// using namespace std;
// //Function to convert binary to octal
// int convert(long binary)
// {
//     int octal = 0, decimal = 0, i = 0, rem;
//     //converting binary to decimal
//     while (binary != 0)
//     {
//         rem = binary % 10;
//         int res = rem * pow(2, i);
//         decimal += res;
//         i++;
//         binary /= 10;
//     }
//     i = 1;
//     //converting decimal to octal
//     while (decimal != 0)
//     {
//         rem = decimal % 8;
//         octal += rem * i;
//         decimal /= 8;
//         i *= 10;
//     }
//     return octal;
// }

// //main program
// int main()
// {
//     long binary;
//     //user input
//     cin >> binary;
//     //calling function
//     int octal = convert(binary);
//     //printing output
//     //cout << octal;

//     vector<int> v;
//     int n=octal;
//     int y;
//     y = n;

//     for (int i = 1; i <= n; i = i * 2)
//     {
//         int x = y % 2;

//         if (y != 1)
//             y = y / 2;

//         v.push_back(x);
//     }

//     for (auto it = v.end(); it >= v.begin(); it--)
//     {
//         cout << *it;
//     }

//     return 0;
// }
