#include <iostream>
using namespace std;

int main()
{
    //Initializing variables.
    char str[100];
    int i;
    int freq[256] = {0};
    
    //Accepting inputs.
    cout<<"Enter the string: ";
    gets(str);
    
    //Calculating frequency of each character.
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    
    //Printing frequency of each character.
    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
           cout<<"frequency of "<<char(i)<<" is "<<freq[i]<<endl;
        }
    }
    return 0;
}