 #include<iostream>
    #include <math.h>
    using namespace std;

    int main() {
        double a, b, c, discriminant, root1, root2, realPart, imagPart;
        //cout<<"Enter coefficients a, b and c: ";
        cin>>a>>b>>c;

        discriminant = (b * b) - (4 * a * c);

        // condition for real and different roots
        if (discriminant > 0) {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            // to display the roots upto 2 decimal places 
            printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
        }

        // condition for real and equal roots
        else if (discriminant == 0) {
            root1 = root2 = -b / (2 * a);
            printf("root1 = root2 = %.2lf;", root1);
        }

        // if roots are not real
        else {
            realPart = - b / (2 * a);
            imagPart = sqrt(-discriminant) / (2 * a);
            //printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
            cout<<endl;
            printf("root1 = %.2lf+%.2lfi ", realPart, imagPart, realPart, imagPart);

            cout<<endl;
            printf("root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
        }

        return 0;
    } 






// #include <bits/stdc++.h>
// #include<math.h>
// using namespace std;
// //#include<vector>

// int main()
// {
//     int n=12,a;
//     int a1= pow(n,2);
//     a= sqrt(n);
//     cout<<a1<<"  "<<a;

//     return 0;
// }





// #include <iostream>
// #include<math.h>
// using namespace std;

// int main()
// {
//     float a,b,c,r1,r2;
//     cin>>a>>b>>c;

//     float d=(b*b)-4*a*c;

//     if(d=0)
//     {
//         r1 = -d/(2*a); 
//         r2 = -d/(2*a); 
//     }
//     else if(d>0)
//     {
//         r1 = (-b+sqrt(d/2))/2*a;
//         r2 = (-b-sqrt(d/2))/2*a;
//     }
//     else if (d<0)
//     {
//         r1 = -b/(2*a);
//         r2 = sqrt(d)/(2*a);      
//     }

//     cout<<r1<<"+"<<r2<<"i"<<" ";
    
    
//     return 0;
// }

