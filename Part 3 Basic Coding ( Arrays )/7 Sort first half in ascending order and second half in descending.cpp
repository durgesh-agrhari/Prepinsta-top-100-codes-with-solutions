   
    //C++ Program to sort an array in ascending or descending order
    #include <iostream>
    using namespace std;
    int  main()
    {
        int i,j,n,a[100],temp,p,q,temp1;
        //cout<<"Enter the size of array : \n" ;  //Taking size of array
        cin>>n;
        //cout<<"Enter the elements : \n" ;  //Taking input from user
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)  // loop for sorting array in ascending order
        {
            for(j=i+1;j<n;j++) { 
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        cout<<"Ascending  : \n";  //print ascending order
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" " ;
        }
        
        for(p=0;p<n;p++) // loop for sorting array in descending order
        {
            for(q=p+1;q<n;q++)
            {
                if(a[p]<a[q])
                {
                    temp1=a[p];
                    a[p]=a[q];
                    a[q]=temp1;
                }
            }
        }
        cout<<endl;
        cout<<"Descending : \n";  // print descending order
        for(p=0;p<n;p++)
        {
            cout<<a[p]<<" ";
        }
    }
