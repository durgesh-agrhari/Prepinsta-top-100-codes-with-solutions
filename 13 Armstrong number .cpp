 //C++ Program
    //Armstrong numberumber or not
    #include<iostream>
    #include<math.h>
    using namespace std;
    //main Program
    int main()
    {
        int num, digit, sum = 0;
        cin >> num;
        //int store = num;
        //find sum of cubes of individual digits
        do
        {
            digit = num % 10;
            sum = sum + pow(digit,3);
            num = num / 10;
        }while(num != 0);
        //checking for ArmStrong number
        if(sum == store)    
            cout << num << "  yes";
        else
            cout << num << "  no";
        return 0;
    }

