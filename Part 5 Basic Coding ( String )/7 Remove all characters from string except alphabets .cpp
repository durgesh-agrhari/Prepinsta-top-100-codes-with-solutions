#include <iostream>
using namespace std;
int main()
{
    //Initializing variable.
    char str[100];
    int i, j;
    gets(str);

    //Iterating each character and removing non alphabetical characters.
    for(i = 0; str[i] != '\0'; ++i)
    {
        while (! ( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0') )
        {
            for(j = i; str[j] != '\0'; ++j)
            {
                str[j] = str[j+1];
            }
            //str[j] = '\0'; 
        }
    }
    cout<<"After removing non alphabetical : "; 
    puts(str);
    return 0;
}
