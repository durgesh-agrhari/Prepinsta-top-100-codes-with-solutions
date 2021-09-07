#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n1,n2,sum=0;
    cin>>n1>>n2;
    for(int i=n1; i<=n2; i++)
    {
        sum=sum+i;
    }

	//sum = n*(n+1)/2;


    cout<<sum; 
    return 0;
}