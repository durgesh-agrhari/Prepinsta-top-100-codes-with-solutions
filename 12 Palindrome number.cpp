
// #include <iostream>
// using namespace std;
// //main Program
// int main()
// {
//     int n, digit, rev = 0;
//     cin >> n;
//     int temp = n;
//     do
//     {
//         digit = n % 10;
//         rev = (rev * 10) + digit;
//         n = n / 10;
//     } while (n != 0);

//     if (temp == rev)
//         cout << "yes";
//     else
//         cout << "no";
//     return 0;
// }

//C++ Program
//Reverse of a number
#include <iostream>
using namespace std;
//main program
int test(string s)
{
    int n = s.size();
    for (int i = 0; i <= n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
            return 0;
    }
    return 1;
}
int main()
{

    int n;
    cin >> n;
    string s = to_string(n);
    if (test(s))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}