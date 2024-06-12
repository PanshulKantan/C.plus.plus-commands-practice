#include <iostream>
void walk(int steps);
int main(){
    //resursion is a process where we invoke a function in a function repeatedly 
    int steps=10;
    walk(steps);
}
void walk(int steps){
    if(steps>0){
        std::cout << "you took a step" << '\n';
        walk(steps-1); // THIS IS A RECURSIVE METHOD AS WE INVOKED FUNCTION INSIDE A FUNCTION INSTEAD OF USING FOR LOOP. THAT IS ITERATE METHOD
    }
}// it uses more memory so not advisable