#include <iostream>
using namespace std;
int main()
{
    char str[100], str_no_spc[100];
    int i=0, j=0 ;
    gets(str);
    //Iterating each character of string.
    while(str[i] != '\0')
    {
        if(str[i] != '(' &&  str[i] != ')')//Removing brackets.
        {
            str_no_spc[j++] = str[i];
        }
        i++;
    }
    str_no_spc[j] = '\0';
    
    //Printing result.
    cout<<"removing all the spaces is:\n"<<str_no_spc;
    return 0;
}