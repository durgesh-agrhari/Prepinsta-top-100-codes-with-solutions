 //C++ Program
    //Armstrong numberumber or not
    #include<iostream>
    #include<math.h>
    using namespace std;
    //main Program
    void armstrong(int num)
    {
        int digit, sum = 0;
        //cin >> num;
        int store = num;
        //find sum of cubes of individual digits
        do
        {
            digit = num % 10;
            sum = sum + pow(digit,3);
            num = num / 10;
        }while(num != 0);
        //checking for ArmStrong number
        if(sum == store)    
            cout << store <<endl ;
        
    }

    int main()

    {

        int lowerLimit, upperLimit;
        cin>>lowerLimit>>upperLimit;

        for(int i=lowerLimit;i<=upperLimit;i++)
            armstrong(i);
        return 0;
    }