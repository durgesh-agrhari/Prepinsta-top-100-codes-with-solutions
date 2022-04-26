#include <iostream>
using namespace std;
int main()
{
    char str[100];
    int i,sum = 0;
    gets(str);
    //Iterating each character through for loop.
    for (i= 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= '0') && (str[i] <= '9'))  //Checking for numeric characters.
        {
            
            sum += (str[i] - '0'); //Adding numeric characters.

        }
    }
    //Printing result.
    cout<<"Sum of all digits:"<<endl<< sum;
    return 0; 
}