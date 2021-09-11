    
    //C++ Program
    //Reverse of a number
    #include <iostream>  
    using namespace std;  
    //main program
    int main()  
    {  
        //variables initialization
        int n, rev=0, r;       
        //user input
        cin>>n;    
        //loop to find reverse number
        do    
        {    
            r=n%10;      
            rev=rev*10+r;    
            n/=10;    
        }while(n!=0);   
        //output
        cout<<"Rev No: "<<rev;     
    return 0;  
    }