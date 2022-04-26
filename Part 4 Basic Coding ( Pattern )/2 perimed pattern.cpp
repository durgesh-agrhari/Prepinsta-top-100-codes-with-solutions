#include <iostream>
using namespace std;
int main()  
{  
    int i,j;
    int n;
    cin>>n;
    //this loop work on the row
    for (i=1;i<=n;i++)
    {
        //this loop work for both the space and print *
        for(j=1;j<=n-i;j++)
        cout<<" ";
        //until value of the k is not equal to 2*i-i, it print star
        for(int k=0; k<(2*i-1); k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}





// #include<iostream>
// using namespace std;
// int main()  
// {  
//     int i,j,k=0;
//     int n;
//     cin>>n;
//     //this loop work on the row
//     for (i=1;i<=n;i++)
//     {
//         //this loop work for both the space and print *
//         for(j=1;j<=n-i;j++)
//         cout<<" ";
//         //until value of the k is not equal to 2*i-i, it print star
//         while(k!=(2*i-1))
//         {
//             cout<<"#";
//             k++;
//         }
//         k=0;
//         cout<<endl;
//     }
//     return 0;
// } 