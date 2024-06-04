//array is just like variable defining operator like int x = 5 and then x becomes 5 but in this one array can have multiple values
#include <iostream>
#include <string>
int main(){

//you define it with using [] box and then define all strings, int, etc in {} brackets, IMP- ALL ARRAY VALUE HAS TO BE OF SAME TYPE
std::string car[] = {"audi", "bmw", "mercedes"};

// if written car[0]= "swift", it will replace audi with it according to the sequence of code
//starting from 0,1,2, etc, you can use that particular argument you want to, car[2] means mercedes as its 3rd, 0,1,2
std::cout << car[1] << '\n';
std::cout << sizeof(car);
//sizeof() tells the size of a particular type you want to choose like car, here it is summing up all the space of 3 strings each of 32 resulting 96 bytes

return 0;
}
/*
you can also write it like

3 in car[3] tells total number of values assigned which has to be written compelsorily

std::string car[3];
car[0]= "mercedes";
car[1]= "bmw";
car[2]= "audi"

*/