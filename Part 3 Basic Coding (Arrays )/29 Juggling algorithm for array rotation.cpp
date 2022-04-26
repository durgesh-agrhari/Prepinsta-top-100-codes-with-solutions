// C++ program to rotate an array by
// d elements
#include <bits/stdc++.h>
using namespace std;

 
/*Function to get gcd of a and b*/ 
int gcd (int a, int b) 
{
  if (b == 0)
    return a;
  
 else
    return gcd (b, a % b);
}


 
/*Function to left rotate arr[] of siz n by d*/ 
void leftRotate (int arr[], int d, int n) 
{
  
    /* To handle if d >= n */ 
    d = d % n;
    
    int g_c_d = gcd (d, n);
    
    for (int i = 0; i < g_c_d; i++)
    {
      /* move i-th values of blocks */ 
      int temp = arr[i];
      
      int j = i;
      
      while (1)
	  {
	     int k = j + d;
	     
	     if (k >= n)
	      k = k - n;
	  
         if (k == i)
	      break;
	  
         arr[j] = arr[k];
	     j = k;
      }
      
      arr[j] = temp;
    }
}

/* Driver program to test above functions */ 
int main () 
{
  int arr[] = { 10, 20, 30, 40, 50, 60 };
  
  // Function calling
  leftRotate (arr, 2, 7);
  
  cout << "Array after two rotation : ";
  
  for (int i = 0; i < 7; i++)
    cout << arr[i] << " ";
  
   return 0;

}
