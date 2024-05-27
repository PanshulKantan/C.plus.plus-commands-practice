#include <iostream>
#include <cmath>
int main(){
    int x;
    std::cout << "Enter the number: ";
    std::cin >> x;
    // ?: or the ternary operator is used like if and else, but you only have 2 options like code for true and for false in this one unlike else if
    std::cout << (x%2==0? "its even" : "its odd");
    //x%2==0 ? std::cout << "its even" : std::cout << "its odd";,             this can also be used but first one can also be used
}