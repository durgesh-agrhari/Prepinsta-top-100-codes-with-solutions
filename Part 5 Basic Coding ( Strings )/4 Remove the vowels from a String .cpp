#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	//Initializing variable.
	char str[100];
	int i,j,len=0;
	cin>>str;
	len=strlen(str);
	for(i=0; i<len; i++)
	{   
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
		    //Deleting vowels. 
			for(j=i; j<len; j++)
			{
			    //Storing string without vowels.
				str[j]=str[j+1];
			}
		i--;
		len--;
		}
	}
	cout<<"After deleting the vowels, the string will be : "<<str;
    
    return 0;	
}



// #include <iostream>
// #include <string.h>
// using namespace std;
 
// int main()
// {
//     //Initializing variable.
//     char str[100];
//     int i,j;
//     //int n='a';
//     int len=0;
//     gets(str);
//   	for (i = 0;  i<len; i++)
//   	{
//         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
//         {
// 	    //Deleting vowels. 
// 			for(j=i; j<len; j++)
// 			{
// 			    //Storing string without vowels.
// 				str[j]=str[j+1];
// 			}
// 		i--;
// 		len--;
//         }
//   	}
//     cout<<"Removing : "<<str;
//     return 0;
// }