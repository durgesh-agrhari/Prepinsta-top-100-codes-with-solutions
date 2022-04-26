#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
int main() 
{
  char str[100];
  int length = 0;
  gets(str);
  
  //Calculating length.
  length = strlen(str);
  
  for(int i=0;i<length;i++)
  {
      if(i==0||i==(length-1)) //Conerting character at first and last index to uppercase.
      {
          str[i]=toupper(str[i]);
      }
      else if(str[i]==' ')//Conerting characters present before and after space to uppercase.
      {
          str[i-1]=toupper(str[i-1]);
          str[i+1]=toupper(str[i+1]);
      }
  }
  //Printing result.
  cout<<"String after capitalizing first and last letter of each word:\n"<<endl<<str;
  return 0;
}