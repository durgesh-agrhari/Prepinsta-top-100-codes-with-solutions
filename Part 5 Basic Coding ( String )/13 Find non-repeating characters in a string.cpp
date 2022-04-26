#include <iostream>
using namespace std;

int main()
{
    //Initializing variables.
    char str[100];
    int i;
    int freq[256] = {0};
    gets(str);
    
    //Calculating frequency of each character.
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    cout<<"The non repeating characters are: ";
    for(i = 0; i < 256; i++)
    {
        if(freq[i] == 1)//Finding non repeating charcters and printing them.
        {
           cout<<char(i)<<" " ;
        }
    }
    return 0;
}






// // Program to remove duplicate elements from an array
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i, j, k, str[100];
//     gets(str);
//     int num[n];
//     for (i = 0; i < n; i++)
//     {
//         cin >> num[i];
//     }

//     for (i = 0; i < n; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             if (num[i] == num[j])
//             {
//                 for (k = j; k < n; k++)
//                 {
//                     num[k] = num[k + 1];
//                 }
//                 n--;
//                 j--;
//             }
//         }
//     }

//     cout << "\nDISTINCT ELEMENTS: " << endl;
//     // sort(num, num + n); if ytou want sort

//     for (i = 0; i < n; i++)
//     {
//         cout << num[i] << " ";
//     }

//     return 0;
// }

// #include<iostream>
// #include<string.h>
// using namespace std;

// int main()
// {
// 	//Initializing variable.
// 	char str[100];
// 	int i,j,len=0;
// 	cin>>str;
// 	len=strlen(str); //strlen is countin the length of string
// 	for(i=0; i<len; i++)
// 	{
// 		if(str[i]== str[i+2])
// 		{
// 		    //Deleting vowels.
// 			for(j=i; j<len; j++)
// 			{
// 			    //Storing string without vowels.
// 				str[j]=str[j+1];
// 			}
// 		i--;
// 		len--;
// 		}
// 	}
// 	cout<<str;

//     return 0;
// }

// // #include <iostream>
// // #include <string.h>
// // using namespace std;

// // int main()
// // {
// //     //Initializing variable.
// //     char str[100];
// //     int i,j;
// //     //int n='a';
// //     int len=0;
// //     gets(str);
// //   	for (i = 0;  i<len; i++)
// //   	{
// //         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
// //         {
// // 	    //Deleting vowels.
// // 			for(j=i; j<len; j++)
// // 			{
// // 			    //Storing string without vowels.
// // 				str[j]=str[j+1];
// // 			}
// // 		i--;
// // 		len--;
// //         }
// //   	}
// //     cout<<"Removing : "<<str;
// //     return 0;
// // }
