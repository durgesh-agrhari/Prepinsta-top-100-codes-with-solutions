    
    //C++ Program
    //Sum of digits in a number
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int num,sum=0;
        //user input
        cin>>num;
        //loop to find sum of digits
        do
        {
                sum+=num%10;
                num=num/10;
        }while(num!=0);
        //output
        cout<<"\nSum of digits is: "<<sum;
        return 0;
    }