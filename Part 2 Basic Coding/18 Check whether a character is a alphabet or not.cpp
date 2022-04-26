//Character is Alphabet or not
#include <iostream>
using namespace std;

//main program
int main()
{

    char alpha;
    cout << "Enter a character: ";
    cin >> alpha;

    //checking for alphabet using ASCII value
    if ((alpha >= 65 && alpha <= 90) || (alpha >= 97 && alpha <= 122))
    {
        //input lies in range
        cout << alpha << " is an alphabet ";
    }

    else
    {
        //input does not lie in range
        cout << alpha << " is not an alphabet ";
    }
    return 0;
}