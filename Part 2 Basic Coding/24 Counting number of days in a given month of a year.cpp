    //C++ program
    //to display number of days in a month
    #include<iostream>
    using namespace std;
    //main Program
    int main()
    {
        //take user inputs for Month and year in integer
        int Month,Year;
        cout<<"\nEnter the Month :";
        cin>>Month;
        cout<<"\nEnter the Year :";
        cin>>Year;
        //Check condition for Month and leap year
        if(Month == 2 && (Year%4 == 0) || ((Year%100 == 0) && (Year%400 == 0)))
            cout<<"Number of days is 29";
        else if(Month == 2)
            cout<<"Number of days is 28";
        else if(Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12)
            cout<<"Number of days is 31";
        else
            cout<<"Number of days is 30";
    }
