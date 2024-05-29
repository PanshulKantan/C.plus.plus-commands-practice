#include <iostream>
//ALWAYS USE #INCLUDE <STRING> FOR USING STD::STRING COMMANDS AS IT CAN GIVE ERRORS IN OUTPUTS.
#include <string>
int main (){
    std::string name;
    std::cout << "please enter your name: ";


    //note that std::cin does not accept empty space (spacebar) as an input if you have not written anything, you HAVE to enter some non empty characters and it only accepts the values till you enter first whitespace
    std::getline(std::cin, name);
    // but getline accepts the whitespace too

    //while command works like a loop you write it like an if statement but you dont need else statement, just the condition for the loop to perform
    while(name.empty()){
        std::cout << "kuchh to likhle bhai  ";
        std::getline(std::cin, name);
     } 
    std::cout << "hello " << name;
    return 0;
}