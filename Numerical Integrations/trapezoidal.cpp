#include <iostream>
#include <cmath>

double f(double x) {        //define the required function
    return 1 / x;
    }
using namespace std;
int main()
{
     double a,b,n,sum,sum1,ans,h,x;
     cout<<"Enter the limit for integration a and b.\n";
     cin>> a >> b;
     
     cout<<"Enter the number of sub-intervals.\n";
     cin>> n;
     
     h=(b-a)/n;
     sum=0;
     for(int i=1; i<n; i++)
           {
            x=a+i*h;
             sum=sum+2*f(x);
           }
           
    sum1=sum+f(a)+f(b);
    ans=h/2*sum1;
    cout<<"The value of integration is "<<ans<<".\n";
    return 0;
}
