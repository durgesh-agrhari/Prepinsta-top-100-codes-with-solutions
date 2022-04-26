   //C++ program
    //Strong Number or not
    #include<iostream>
    using namespace std;
    //main Program
    int main()
    {
        int Number,Divisor,count1,i,j;
        cout<<"\nEnter range of number :";
        cin>>Number;
        cout<<"\nEnter exact number of divisors :";
        cin>>Divisor;
        //count1 is to count total number of Numbers with exact divisor
        count1 = 0;
        for(int i=0;i<=Number;i++)
        {
            //count2 checks the total number of divisors
            int count2 = 0;
            //loop to find number of divisors
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    count2++;
                }
            }
            if(count2==Divisor)
            {
                count1++;
                cout<<i<<" ";
            }
            
        }
        cout<<endl<<"\n"<<count1;
    }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//      int n;
//     //cin>>n;
//     vector<int> v;
//     //int size = sizeof(arr)/sizeof(arr[0]);

//     int cnt=0;
//     for(int i=0; i<n; i++)
//     {
//         int x; cin>>x; v.push_back(x);
//     }
//     cout<<sizeof(v);
//     //cout<<size<<" "<<cnt;

//     return 0;
// }

