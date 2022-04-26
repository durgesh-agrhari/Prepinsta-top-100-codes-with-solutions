

// #include <stdio.h>  
   
// int main()  
// {  
//     //Initialize array   
//     int arr[] = {1, 2, 8, 3, 9 , 2, 2, 5, 1};   
      
//     //Calculate n of array arr  
//     int n = sizeof(arr)/sizeof(arr[0]);  
      
//     //Array fr will store frequencies of element  
//     int fr[n];  
//     int visited = -1;  
      
//     for(int i = 0; i < n; i++){  
//         int count = 1;  
//         for(int j = i+1; j < n; j++){  
//             if(arr[i] == arr[j]){  
//                 count++;  
//                 //To avoid counting same element again  
//                 fr[j] = visited;  
//             }  
//         }  
//         if(fr[i] != visited)  
//             fr[i] = count;  
//     }  
      
//     //Displays the frequency of each element present in array  
//     printf("---------------------\n");  
//     printf(" Element | Frequency\n");  
//     printf("---------------------\n");  
//     for(int i = 0; i < n; i++){  
//         if(fr[i] != visited){  
//             printf("    %d", arr[i]);  
//             printf("    |  ");  
//             printf("  %d\n", fr[i]);  
//         }  
//     }  
//     printf("---------------------\n");  
//     return 0;  
// }  