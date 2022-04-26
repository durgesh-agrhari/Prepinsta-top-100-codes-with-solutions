//C++ Program
//Maximum number of handshakes
#include <iostream>
using namespace std;
//main program
int main()
{
    int a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;

    int x = ((a*d)+(c*b));
    int y =(b*d);
    cout<<x<<"/"<<y;

    return 0;
}