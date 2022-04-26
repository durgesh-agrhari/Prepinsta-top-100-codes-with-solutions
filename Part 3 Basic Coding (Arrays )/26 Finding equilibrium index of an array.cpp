#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[n], sum = 0, left_sum = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i];
  }

  left_sum = a[0];
  sum -= a[0];

  for (int i = 1; i < n; i++)
  {
    sum -= a[i];
    if (left_sum == sum)
    {
      cout << "\nEquilibrim index : " << i;
      break;
    }
    left_sum += a[i];
  }
  return 0;
}
