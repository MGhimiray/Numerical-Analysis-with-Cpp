#include <iostream>
#include <cmath>

double f(double x) {        //define the required function
    return 1 / x;
}

int main() {
    double a, b, n, h, sum = 0.0, x;

    std::cout << "Enter the limits for integration a and b: ";
    std::cin >> a >> b;

    std::cout << "Enter the number of subintervals (must be an even number): ";
    std::cin >> n;

    h = (b - a) / n; // Width of each sub-interval
    sum = f(a) + f(b);

    for (int i = 1; i < n; i += 2) {
        x = a + i * h;
        sum += 4 * f(x);
    }

    for (int i = 2; i < n; i += 2) {
        x = a + i * h;
        sum += 2 * f(x);
    }

    sum = h / 3 * sum;
    std::cout << "The value of integration is: " << sum << std::endl;

    return 0;
}
