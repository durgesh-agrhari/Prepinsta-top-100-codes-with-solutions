#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"a is greater  Number";
    }
    else if(b>a && b>c )
    {
        cout<<"b is greater";
    }
    else
    {
        cout<<"c is greater number";
    }
    return 0;
}

