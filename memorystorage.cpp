// memory storage or memory address is a sort of storage which contains the value
#include <iostream>
#include <string>
int main(){
    std::string name = "bro";
    int x= 9;

    std::cout << &name << '\n';
    std::cout << &x;
    // it gives the memory address of the data stored in it
}