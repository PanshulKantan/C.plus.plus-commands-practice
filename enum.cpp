#include <iostream>
int main(){
    //enums are user defined data type which is particularly comparing integers with string or they are named 
    //specially used for switches as it only takes int as arguments
    enum day {sunday=0, monday =1, tuesday =2, wednesday=3};
    day day=monday; //only defined variables and integers allowed to be defined in this data type(whatever written in enum())
    switch(day){
        case monday: std::cout << "its monday";
        break;
        case sunday: std:: cout << "its sunday";
    }
    return 0;
}