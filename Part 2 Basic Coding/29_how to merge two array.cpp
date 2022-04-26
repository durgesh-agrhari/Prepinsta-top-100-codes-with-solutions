#include<iostream>
using namespace std;
int main()
{
	int n, m, i, k;
    cin>>n>>m;
    int arr1[n], arr2[m], merge[n+m];

    for(i=0; i<n; i++)
    {
        cin>>arr1[i];
        merge[i] = arr1[i];
    }
    k = i;
    for(i=0; i<m; i++)
    {
        cin>>arr2[i];
        merge[k] = arr2[i];
        k++;
    }
    cout<<"\nThe New Array (Merged Array): = \n";
    for(i=0; i<k; i++)
        cout<<merge[i]<<" ";
    cout<<endl;
    return 0;
}