/* C++ program to print a given number in words.
The program handles till 9 digits numbers and
can be easily extended to 20 digit number */
#include <iostream>
using namespace std;

// strings at index 0 is not used, it is to make array
// indexing simple
string one[] = { "", "one ", "two ", "three ", "four ",
				"five ", "six ", "seven ", "eight ",
				"nine ", "ten ", "eleven ", "twelve ",
				"thirteen ", "fourteen ", "fifteen ",
				"sixteen ", "seventeen ", "eighteen ",
				"nineteen " };

// strings at index 0 and 1 are not used, they is to
// make array indexing simple
string ten[] = { "", "", "twenty ", "thirty ", "forty ",
				"fifty ", "sixty ", "seventy ", "eighty ",
				"ninety " };

// n is 1- or 2-digit number
string numToWords(int n, string s)
{
	string str = "";
	// if n is more than 19, divide it
	if (n > 19)
		str += ten[n / 10] + one[n % 10];
	else
		str += one[n];

	// if n is non-zero
	if (n)
		str += s;

	return str;
}

// Function to print a given number in words
string convertToWords(long n)
{
	// stores word representation of given number n
	string out;

	// handles digits at ten millions and hundred
	// millions places (if any)
	out += numToWords((n / 10000000), "crore ");

	// handles digits at hundred thousands and one
	// millions places (if any)
	out += numToWords(((n / 100000) % 100), "lakh ");

	// handles digits at thousands and tens thousands
	// places (if any)
	out += numToWords(((n / 1000) % 100), "thousand ");

	// handles digit at hundreds places (if any)
	out += numToWords(((n / 100) % 10), "hundred ");

	if (n > 100 && n % 100)
		out += "and ";

	// handles digits at ones and tens places (if any)
	out += numToWords((n % 100), "");

	return out;
}

// Driver code
int main()
{
	// long handles upto 9 digit no
	// change to unsigned long long int to
	// handle more digit number
	long n = 10;

	// convert given number in words
	cout << convertToWords(n) << endl;

	return 0;
}







// //C++ program
//     //convert number to text
//     #include<iostream>
//     #include<string.h>
//     using namespace std;
//     //main Program
//     void numToWords(string num)
//     {
//         int length_of_string = strlen(num);
//         if (length_of_string == 0){
//              cout<<"String is Empty"; 
//              return;
//         }
        
//         if (length_of_string > 4){
//             cout<<"Please enter the string with supported length"; 
//             return;  
//         }
//         string ones_digits = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}; 
//         string tens_digits = {"", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen","nineteen"}; 
//         string multiple_of_ten = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"}; 
//         string power_of_ten = {"hundred", "thousand"};
//         cout<<num<<":\n";
//         if (length_of_string == 1){  
//         cout<<ones_digits[num[0] – ‘0’]; 
//         return;
//         }
//         int x=0;
//         while (x < strlen(num)){
//             if(length_of_string >= 3){
//                 if (num[x] – 48 != 0){
//                     cout<<ones_digits[num[x] – 48]<<"\n";
//                     cout<<power_of_ten[length_of_string – 3]<<"\n";
//                     length_of_string–;
//                 }
//             }
//             else{
//                 if (num[x] – 48 == 1){
//                     sum = (num[x] – 48 + num[x] – 48); 
//                     cout<<tens_digits[sum]); 
//                     return;
//                 }
//                 else if(num[x] – 48 == 2 and num[x + 1] – 48 == 0){
//                     cout<<"twenty"; 
//                     return;
//                 }
//                 else{
//                     int i = num[x] – 48; 
//                     if(i > 0){
//                         cout<<multiple_of_ten[i], end = " "; 
//                     }
//                     else{ 
//                         print("", end = ""); 
//                     }
//                     x += 1; 
//                     if(num[x] – 48 != 0){
//                         cout<<ones_digits[num[x] – 48];
//                     }
//                     }
//             }
//             x++;
//         }
//     }
//     int main()
//     {
//         numToWords("1121");
//         return 0;
//     }