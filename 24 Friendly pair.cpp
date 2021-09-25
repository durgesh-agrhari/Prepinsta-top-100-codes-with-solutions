
#include <iostream>
using namespace std;

int main()
{
    int div, num,num2, sum = 0,sum2=0;

    cin >> num>>num2;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    
    for (int i = 1; i < num2; i++)
    {
        if (num2 % i == 0)
        {
            sum2 += i;
        }
    }

    cout << sum <<" "<<sum2<< endl;


    if (num == sum2 && num2 == sum)
        cout << "Yes pair";
    else
        cout << "No Pair";
    return 0;
}