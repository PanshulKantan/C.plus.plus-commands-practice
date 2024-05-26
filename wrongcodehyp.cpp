
#include <iostream>
#include <cmath>
int main (){
    //you can also use double a,b,c,d,e;
double a;
double b;
double c;
double d;
double e;

std::cout << "perpendicular: "; 
std::cin >> a;
c= pow(a,2);

std::cout << "base: ";
std::cin >> b;
d= pow(b,2);

e=c+d;
std::cout << "hypotenuse: " << (double) sqrt(e);


    return 0;
}

/*                  SEQUENCE IS VERY IMPORTANT


first wrong code:



#include <iostream>
#include <cmath>
int main (){
double a;
double b;
double c;
double d;
double e;

std::cout << "perpendicular: "; 
std::cin >> a;
std::cout << "base: ";
std::cin >> b;
std::cout << "hypotenuse: " << (double) sqrt(e);
c= pow(a,2);
d= pow(b,2);
e= c+d;
    return 0;
}



second wrong code:

    #include <iostream>
#include <cmath>
int main (){
double a;
double b;
double c;
double d;
double e;


c= pow(a,2);
d= pow(b,2);


std::cout << "perpendicular: "; 
std::cin >> a;

std::cout << "base: ";
std::cin >> b;

std::cout << "hypotenuse: " << (double) sqrt(e);
e= c+d;

    return 0;
}


Third wrong code 

#include <iostream>
#include <cmath>
int main (){
double a;
double b;
double c;
double d;
double e;


c= pow(a,2);
d= pow(b,2);
e= c+d;

std::cout << "perpendicular: "; 
std::cin >> a;

std::cout << "base: ";
std::cin >> b;

std::cout << "hypotenuse: " << (double) sqrt(e);


    return 0;
}

*/