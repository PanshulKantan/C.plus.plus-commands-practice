#include <iostream>
int main (){

    int age;
    std::cout << "please enter your age: ";
    std::cin >> age;
    
    
    //sequence is very important for c++ as the code runs only on the step by step process guided by you

    // use if (the condition) { write the code you want to execute when the condition is fulfilled}, and then use else{code if condition doesnt meet}
    if(age>=100){
        std::cout << "dont joke darling";
    }
    //else if work like a second condition to check if first one doesnt meet it
    else if(age == 17){
        std::cout << "wait for an year lol";
    }

    else if(age>=18){
        std::cout << "welcome";
    }
    else{
        std::cout << "access denied";
    }
}