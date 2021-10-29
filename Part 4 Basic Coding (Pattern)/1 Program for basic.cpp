#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int k=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=k; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
        k=k+2;
    }
    return 0;
}

// #include<stdio.h>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=n; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }
