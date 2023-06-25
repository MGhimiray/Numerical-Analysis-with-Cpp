#include<iostream>
#include<cstdlib>
#include<cmath>

double f(double x) {
    return x-3;
}

int main()
  {
   
   double x[10];
   int i;
   
   std::cout<< "Enter the guess values a and b.\n";
   std::cin>> x[0] >> x[1];
   
   i=2;
   while (true)
       {
       x[i]=x[i-1]-f(x[i-1])*(x[i-1]-x[i-2])/(f(x[i-1])-f(x[i-2]));
       if (std::abs(x[i]-x[i-1])<0.001)
         {
           break;
         }
         
         i++;
       }

   std::cout<<"the root is "<<x[i] <<".\n";
  return 0;
}


