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
        if(str[i] != ' ')  
        {
            
            str_no_spc[j++] = str[i];
        }
        i++;
    }
    str_no_spc[j] = '\0';
    //Printing result.
    cout<<"The string after removing all the spaces is:\n"<<str_no_spc;
    return 0;
}







// #include <iostream>
// using namespace std;
// int main()
// {
//     //Initializing variable.
//     char str[100];
//     int i, j;
//     gets(str);

//     //Iterating each character and removing non alphabetical characters.
//     for(i = 0; str[i] != '\0'; ++i)
//     {
//         while (!( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0') )
//         {
//             for(j = i; str[j] != '\0'; ++j)
//             {
//                 str[j] = str[j+1];
//             }
//             str[j] = '\0'; 
//         }
//     }
//     cout<<"After removing : "<<endl; 
//     cout<<endl;
//     puts(str);
//     return 0;
// }
