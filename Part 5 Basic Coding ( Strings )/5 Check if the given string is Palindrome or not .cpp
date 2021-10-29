#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    //Initializing variable.
    char str[100];  
    int i,length=0,flag=0;

    //Accepting input.
    //cout<<"Enter  the string : "<<endl;
    gets(str);
    length=strlen(str);
    cout<<"Length "<<length<<" ";
    //Initializing for loop.
    for(i=0;i<length/2;i++)  
    {
      //Checking if string is palindrome or not.
      if(str[i]==str[length-i-1])
      flag++;
    }

      //Printing result.
      cout<<"No "<<i<<" "<<endl;
      cout<<"str "<<length-i-1<<" "<<endl;
      if(flag==i)
 	cout<<"String is palindrome";
      else
        cout<<"String is not palindrome";

      return 0;
}