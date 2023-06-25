#include <iostream>
#include <cmath>

int main() {
    double x[10], y[10];
    int n;
    double a, sum, value;
    
    std::cout << "How many data points are to be considered? \n";
    std::cin >> n;
    
    std::cout << "Enter data x" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> x[i];
    }
    
    std::cout << "Enter data y" << std::endl;
    for (int j = 0; j < n; j++) {
        std::cin >> y[j];
    }
    
    std::cout << "Insert the value at which interpolation is required: ";
    std::cin >> a;
    
    sum = 0;
    value = 1.0;
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
       if (i != j) 
          {
           value = value * ((a - x[j]) / (x[i] - x[j]));
          }
        }
        sum = sum + value * y[i];
        }
    
    std::cout << "Interpolated value is " << sum << ".\n";
    
    return 0;
}
