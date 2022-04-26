#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int disjoint(int arr1[], int arr2[], int K, int k)
{
  for (int i = 0; i < K; i++)
  {
    for (int j = 0; j < k; j++)
    {
      if (arr1[i] == arr2[j])
        return -1;
    }
  }
  return 1;
}

int main()
{
  int k, K;
  cin >> K >> k;
  int arr1[K];
  int arr2[k];

  for (int i = 0; i < K; i++)
  {
    cin >> arr1[i];
  }

  for (int i = 0; i < k; i++)
  {
    cin >> arr2[i];
  }

  int NEW = disjoint(arr1, arr2, K, k);
  if (NEW == -1)
    cout << "The arrays are not disjoint\n";
  else
    cout << "The arrays are disjoint\n";

  return 0;
}