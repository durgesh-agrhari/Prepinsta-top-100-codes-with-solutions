#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (j>=i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// *****
// *****
// *****
// *****
// *****

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for(int i=0; i<5; i++)
//     {
//         for(int j=0; j<5; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// *
// **
// ***
// ****
// *****

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for(int i=0; i<5; i++)
//     {
//         for(int j=0; j<5; j++)
//         {
//             if(j<=i)
//             {
//                 cout<<"*";
//             }
//             else
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }