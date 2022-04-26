#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100];
    int i, j, len=0;
    gets(str);
    
    //Calculating length.
    len = strlen(str);
    
    //Reversing and printing the string using for loop. 
    cout<<"The reverse string is: ";
    for(i = len - 1; i >= 0; i--) 
    {
        cout<<str[i];
    }
    return 0;
}






// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     //Initializing variable.

//     char str[100];  
//     int i,length=0,flag=0;

//     //Accepting input.
//     //cout<<"Enter  the string : "<<endl;
//     gets(str);
//     length=strlen(str);
//     cout<<"Length "<<length<<" "<<endl;
//     //Initializing for loop.
//     for(i=0;i<length/2;i++)  
//     {
//       //Checking if string is palindrome or not.
//       if(str[i]==str[length-i-1])
//       {
//       char temp = str[i];
//       str[i]= str[length-i-1];
//       str[length-i-1] = temp;
//       }
//     }
//     for(i=0; i<length; i++)
//     {
//       cout<<str[i];
//     }
//     return 0;
// }