#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
    //Initializing variable.
    char str[100];
    int i;
    gets(str);
  	//Initializing for loop.
  	for (i = 0; str[i]!='\0'; i++)
  	{
  	    //Toggling characters.
  	    if(str[i] >= 'A' && str[i] <= 'Z') 
            { 
              str[i] = str[i] + 32; 
            } 
            else if(str[i] >= 'a' && str[i] <= 'z')
            {
  	      str[i] = str[i] - 32;
	    }		
  	}
  	cout<<"\nToggoled string: "<<str<<endl; //Printing toggled string.
  	return 0;
}
