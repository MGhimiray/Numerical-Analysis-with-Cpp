#include<iostream>
#include<cstdlib>
#include<cmath>

//#define f(x)=x-3

double f(double x) {
    return x-3;
}

using namespace std;

int main()
{
   float a, b,c;
   up:
   std::cout<<"Enter the values a and b.\n";
   std::cin>> a >>b;
   
   
   if(f(a)==0)
     {
     std::cout<<"The value "<<a<<" is itself a root." <<endl;
     }
   
   if(f(b)==0)
   {
   std::cout<<"The value"<<b<<"is itself a root." <<endl;
   }
   
   if(f(a)*f(b)>0)
   {
   std::cout<<"The entered values are wrong.\n";
   goto up;
   }
   else
   {
   goto down;
   }
   
   down:
   c=(a+b)/2;
   
   if (f(a)<0 && f(b)>0) 
       {
         if (f(c)>0)
            {
              b=c;
            }
         else
            {
              a=c;
            }
        }
        
    if (f(a)>0 && f(b)<0)
        {
          if (f(c)>0)
             {
             a=c;
             }
          else
             {
             b=c;
             }   
        }    
        
     if (std::abs(a-b) < 0.001) 
        {
            std::cout << "The root is " << c << std::endl;
        }
        else
        {
        goto down;
        }

  
	 return 0;
}

