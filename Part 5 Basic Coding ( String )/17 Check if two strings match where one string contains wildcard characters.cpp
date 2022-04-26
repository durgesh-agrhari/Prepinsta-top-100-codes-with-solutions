#include <iostream>
using namespace std;
int main()
{
    // Initialize the variables.
    string wild, str;
    // Accept the inputs.
    //cout << "Enter string containing wild characters: ";
    cin >> wild;
    //cout << "Enter string to be matched: ";
    cin >> str;
    bool TRUE = true, FALSE = false;

    bool check[wild.length() + 1][str.length() + 1];
    check[0][0] = TRUE;
    for (int i = 1; i <= str.length(); i++)
        check[0][i] = FALSE;
    for (int i = 1; i <= wild.length(); i++)
        if (wild[i - 1] == '*') // Checking for wild characters.
            check[i][0] = check[i - 1][0];
        else
            check[i][0] = FALSE;
    for (int i = 1; i <= wild.length(); i++)
    {
        for (int j = 1; j <= wild.length(); j++)
        {
            if (wild[i - 1] == str[j - 1])
                check[i][j] = check[i - 1][j - 1];
            else if (wild[i - 1] == '?') // Checking for wild character '?'.
                check[i][j] = check[i - 1][j - 1];
            else if (wild[i - 1] == '*') // Checking for wild character '*'.
                check[i][j] = check[i - 1][j] || check[i][j - 1];
            else
                check[i][j] = FALSE;
        }
    }
    // Printing result.
    if (check[wild.length()][str.length()])
        cout << "TRUE";
    else
        cout << "FALSE</span.";
}
