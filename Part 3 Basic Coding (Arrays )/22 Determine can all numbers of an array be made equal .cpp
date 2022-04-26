// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function that returns true if all
// the array elements can be made equal
// with the given operation
bool EqualNumbers(int a[], int n)
{
	for (int i = 0; i < n; i++) {

		// Divide number by 2
		while (a[i] % 2 == 0)
			a[i] /= 2;

		// Divide number by 3
		while (a[i] % 3 == 0)
			a[i] /= 3;

		if (a[i] != a[0]) {
			return false;
		}
	}

	return true;
}

// Driver code
int main()
{
	int a[] = { 50, 75, 150 };

	int n = sizeof(a) / sizeof(a[0]);

	if (EqualNumbers(a, n))
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
