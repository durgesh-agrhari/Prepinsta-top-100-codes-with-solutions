  //C++ Program
    //Abundant Number or not
    #include<iostream>
    using namespace std;
    //main Program
    int main ()
    {  
        int  div, num, sum=0;
        //cout << “Enter the number to check : “;
        //user input
        cin >> num;
        //loop to find the sum of divisors
        for (int i=1; i < num; i++)
        {
       // div = num % i;
            if (num%i == 0)
            {
                sum += i;
            }
           
        }
        //checking for Abundant number
        cout<<sum<<endl;
        if (sum > num)
            cout<< num <<"  Yes";
        else
            cout<< num <<"  No";
        return 0;
    }




// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n, a, sum = 0;
//     cin >> n;
//     int store;
//     for (int i = 1; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             sum = sum + i;
//         }
//     }

//     if(sum > store)
//     {
//         cout<<"yes";
//     }
//     else
//     {
//         cout<<"no";
//     }
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n, sum = 0;
//     cin >> n;
//     int store;
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             sum = sum + i;
//         }
//     }

//     if (store < sum)
//     {
//         cout << "yes ";
//     }
//     else
//     {
//         cout << "no ";
//     }
//     cout << sum;

//     return 0;
// }
