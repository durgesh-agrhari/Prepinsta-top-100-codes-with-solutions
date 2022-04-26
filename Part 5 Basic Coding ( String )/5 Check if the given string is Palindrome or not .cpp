#include <bits/stdc++.h>
//#include <string.h>
using namespace std;
int main()
{
    char str[100];  
    int i,length=0,flag=0;
     
    gets(str);
    length=strlen(str);
    
    for(i=0;i<length/2;i++)  
    {
      //Checking if string is palindrome or not.
      if(str[i]==str[length-i-1])
      flag++;
    }
      //Printing result.
      if(flag==i)
 	      cout<<"yes";
      else
        cout<<"no";
      return 0;
}














// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     char str[100];  
//     int i,length=0,flag=0;
     
//     gets(str);
//     length=strlen(str);

//     cout<<"Length "<<length<<" ";
    
//     for(i=0;i<length/2;i++)  
//     {
//       //Checking if string is palindrome or not.
//       if(str[i]==str[length-i-1])
//       flag++;
//     }
//       //Printing result.
//       cout<<"No "<<i<<" "<<endl;
//       cout<<"str "<<length-i-1<<" "<<endl;
//       if(flag==i)
//  	      cout<<"String is palindrome";
//       else
//         cout<<"String is not palindrome";
//       return 0;
// }








// #include <iostream>
// #include <string.h>
// using namespace std;
// int main()
// {
//     char str[100];
//     int i, j, len=0;
//     gets(str);
//     len = strlen(str);

//     char store = str(len);

//     cout<<"reverse string : ";
//     for(i = len - 1; i >= 0; i--) 
//     {
//       if(str[i]==store)
//       {
//         cout<<"yes";
//       }
//       else{
//         cout<<"No";
//       }
//         cout<<str[i];
//     }


//     return 0;
// }