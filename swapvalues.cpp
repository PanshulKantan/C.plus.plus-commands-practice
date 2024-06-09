#include <iostream>
#include <string>
void swap(std::string &x, std::string &y);
int main(){
    std::string x= "kool-aid";
    std::string y= "water";
    swap(x,y);
    std::cout << x << '\n';
    std::cout << y;
}

// &x, &y. This is because we made COPIES of x and y and didnt really change the original value of x and y, to do that, add & before variables
void swap(std::string &x, std::string &y){
    // as we are providing the original memory address of the variable *not the copy*
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}