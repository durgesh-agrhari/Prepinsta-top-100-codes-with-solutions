#include <bits/stdc++.h>

using namespace std;

void change(int array[], int k)
{
    map<int, int> map;
    for (int x = 0; x < k; x++)
        map[array[x]] = x;
    int rank = 1;

    for (auto x : map)
        array[x.second] = rank++;
}

int main()
{
    int k;
    cin >> k;
    int array[k];
    for (int x = 0; x < k; x++)
        cin >> array[x];
    change(array, k);

    cout << "Elements afer replacement : ";
    for (int x = 0; x < k; x++)
        cout << array[x] << " ";

    return 0;
}