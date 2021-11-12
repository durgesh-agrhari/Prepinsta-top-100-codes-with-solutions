#include<stdio.h>

int minimum (int m, int n)
{
  return m < n ? m : n;
}

int maximum (int m, int n)
{
  return m > n ? m : n;
}

int maxSubarrayProduct (int arr[], int a)
{
  int max = 1; //max_ending_here
  int min = 1; //min_ending_here
  int MAXIMUM = 1;
  for (int i = 0; i < a; i++)
    {
      if (arr[i] > 0)
	{
	  max = max * arr[i];
	  min = minimum (min * arr[i], 1);
	}
      else if (arr[i] == 0)
	{
	  max = 1;
	  min = 1;
	}
      else
	{
	  int temp = max;	
	  max = maximum (min * arr[i], 1);
	  min = temp * arr[i];
	}
      if (MAXIMUM < max)
	MAXIMUM = max;
    }
  return MAXIMUM;
}


int main ()
{
  int length;
  
  scanf ("%d", &length);
  int array[10];

  for (int i = 0; i < length; i++)
    scanf ("%d", &array[i]);\
  printf ("Maximum product : %d", maxSubarrayProduct (array, length));
  return 0;

}