//struct is a type of datatype which lets us allow to input limited amount of different datatypes as per our needs
#include <iostream>
struct student{
    double gpa;
    std::string name;
    bool enrolled;
};
int main(){
    student panshul;
    panshul.gpa = 9;
    panshul.name= "Panshul Kantan";
    panshul.enrolled= true;
    std::cout << panshul.gpa << '\n';
    std::cout << panshul.name << '\n';
    std::cout << panshul.enrolled;
} //you can also use that in voids.