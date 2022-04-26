#include <iostream>
#include <cstring>
using namespace std;

void replaceSubstring(char st[],char sub[],char new_str[])//Function to replace substring.
{
    int stLen,subLen,newLen;
    int i=0,j,k;
    int flag=0,start,end;
    stLen=strlen(st);
    subLen=strlen(sub);
    newLen=strlen(new_str);

    for(i=0;i<stLen;i++)//Finding substring.
    {
        flag=0;
        start=i;
        for(j=0;st[i]==sub[j];j++,i++)
            if(j==subLen-1)
                flag=1;
        end=i;
        if(flag==0)
            i-=j;
        else
        {
            for(j=start;j<end;j++)
            {
                for(k=start;k<stLen;k++)
                    st[k]=st[k+1];
                stLen--;
                i--;
            }

            for(j=start;j<start+newLen;j++)//Replacing suv string with the input string
            {
                for(k=stLen;k>=j;k--)
                    st[k+1]=st[k];
                st[j]=new_str[j-start];
                stLen++;
                i++;
            }
        }
    }
}

int main() //Main function.
{
    char st[100],sub[100],new_str[100];
    //cout<<"Enter a string: ";
    gets(st);
    //cout<<"Enter the substring: ";
    gets(sub);
    //cout<<"Enter the new substring: ";
    gets(new_str);
    replaceSubstring(st,sub,new_str); //Calling created function.
    //Printing result using called function.
    cout<<"The string after replacing substring : => "<<st<<endl;
    return 0;
}
