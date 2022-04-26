//C++ Program
//Maximum number of handshakes
#include <iostream>
using namespace std;
//main program
int main()
{
    int p;
    //cout<<“Enter number of Persons: “;
    //user input
    cin >> p;
    cout << "Maximum number of handshakes: ";
    //find maximum number of handshakes using formula
    int max = p * (p–1) / 2;
    //printing output
    cout << max;
    return 0;
}