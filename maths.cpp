#include <iostream>

#include <cmath>

int main (){
    double x=8;
    double y=10;
    double z;
    double a;
    double b; 
    double c;
    double d;


    using std::cout;


    //std::min (x,y) gives minimum value and assign it to the variable chosen, same with max
    z= std::min(x, y);

    // pow(x, y)= x^y it is power function
    a= pow(2, 8);

    //sqrt=square root
    b= sqrt(100);

    //abs work like modulus function as it give absolute value 
    c= abs(-276);

    // round is used to round off the number 
    d= round(3.56);
    // If you want to round up, use 'd= ceil(3.14);' and then it will print 4, and d=floor (2.99); will print 2    IMPORTANTTTTTT


    cout << z << '\n';
    cout << a << '\n';
    cout << b << '\n';
    cout << c << '\n';
    cout << d << '\n';
}