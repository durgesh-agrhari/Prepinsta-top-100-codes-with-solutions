#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, flag = 0;
 
    cin >> num;
    int sq = num * num;
    cout<<sq<<endl;
    int store = num;
    while (num > 0)
    {
        if (num % 10 != sq % 10)
        {
            flag = 1;
            break;
        }
        num = num / 10;
        sq = sq / 10;
    }
    if (flag == 1)
        cout << store << "  no";
    else
        cout << store <<"  yes";
    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n,a;
//     cin>>n;
//     int sq=pow(n,2);
//     int count=0;


//     int n1, num = 0, lo=0;
//     n1 = n; 
//     while (n != 0)
//     {
//         n /= 10; 
//         num++; 
//     }

//     cout<< num;

//     int j=n%(10*num);
    
//     if(j==n)
//     {
//         cout<<"yes";
//     }
//     else{
//         cout<<"No";
//     }

//     //cout<<sq;

// }