   //C++ Program
    //Convert all 0’s to 1
    #include<iostream>
    using namespace std;
    //main program
    int main()
    {
        int num,num2=0;
        //cout<<“Enter number: “;
        //user input
        cin>>num;
        //checking for 0 input
        if(num == 0)
            num2=1;
        //converting 0 to 1
        while(num>0)
        {
            int rem = num%10;
            if(rem == 0)
                rem = 1;
            num = num/10;
            num2=num2*10+rem;
        }
        //converted number
        cout<<"Converted number is: "<<num2;
        return 0;
    }



// //C++ Program
// //Maximum number of handshakes
// #include <iostream>
// using namespace std;
// //main program
// int main()
// {
//     int n, d = 0, r;
//     cin >> n;
//     while (n != 0)
//     {
//         r = n % 10;
//         d = (d * 10) + r;
//         n = n / 10;
//         if (r == 0)
//         {
//             //cout << "1";
//             break;
//         }
//     }
//     cout << d << " ";
//     return 0;
// }