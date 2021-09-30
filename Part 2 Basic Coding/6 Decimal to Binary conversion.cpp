
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
//function to convert binary to decimal

//main program
int main()
{
    vector<int> v; int n; cin>>n;
     int y; y=n;
    
    for(int i=1;i<=n;i=i*2)
     {
        int x = y%2; 
       
       if(y!=1)
         y = y/2;

        v.push_back(x);
        
     }

     for(auto it=v.end(); it>=v.begin();it--)
       {
           cout<<*it;
       }
    return 0;
}