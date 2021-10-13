#include <iostream>
using namespace std;

int main()
{
    long long n,k,cnt=0;
    cin>>n>>k; 
    while(n!=0)
    {
        int r =n%10;
        if(k==r){
            cnt++;
        }
        n=n/10;
    }
    cout<<cnt;
    return 0;
}

