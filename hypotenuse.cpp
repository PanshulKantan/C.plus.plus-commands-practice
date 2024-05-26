#include <iostream>
#include <cmath>
int main (){
double a;
double b;

std::cout << "perpendicular: ";
std::cin >> a;
std::cout << "base: ";
std::cin >> b;
std::cout << "hypotenuse: " << sqrt(pow(a, 2) + pow(b, 2));
return 0;
}