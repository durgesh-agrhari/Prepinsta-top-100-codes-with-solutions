#include<bits/stdc++.h>

    using namespace std;

    map<int,int>mpp;

    bool compare(int a,int b){

        if(mpp[a]<mpp[b])

            return true;

        return false;

    }

    int main(){

        int a[]={3, 6, 13, 3, 9, 10, 14, 6, 9, 13};

        int b[]={6,3,9,13,10};

        int rank=0;

        // inserting the elements of array b in the map and counting their frequency 

        for(int i=0;i<5;i++){

            if(mpp.find(b[i])==mpp.end()){

                mpp[b[i]]=rank++;

            }

        }

        // inserting the elements of array b in the map and counting their frequency 

        for(int i=0;i<10;i++){

            if(mpp.find(a[i])==mpp.end()){

                mpp[a[i]]=rank++;

            }

        }

        sort(a,a+10,compare);

        //printing the sorted array

        for(int i=0;i<10;i++){

            cout<<a[i]<<" ";

        }
    }



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i]; 
//     }

//     for(int i=1; i<=n; i++)
//     {
//         for(int j=i+1; j<n; j++ )
//         {
//             if(arr[i]==arr[j])
//             {
//                 cout<<arr[i]<<" "<<arr[j];           
//             }
//         }
//     }
//     return 0;
// }