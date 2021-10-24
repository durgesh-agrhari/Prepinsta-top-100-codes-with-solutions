#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
    //Initializing variable.
    char str[100];
    int i;
    gets(str);
    int count=0;
  	//Initializing for loop;
    int len=0;
  	for (i = 0; str[i]!='\0'; i++)
  	{
          if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
          {
              len++;
          }
  	}
      cout<<"number: "<<len<<" ";
    return 0;
}




  	// for (i = 0; str[i]!='\0'; i++)
  	// {
    //       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    //       {
    //           cout<<"Vowels";
    //       }
    //       else
    //       {
    //           cout<<"consonent";
    //       }
  	// }