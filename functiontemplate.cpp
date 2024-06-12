//function template is a sort of datatype which accepts many types of data like int, double, char, string, etc.
#include <iostream>
template <typename T> //if we want 2 different kind of inputs, we use different templates or else inputs can be of any type but they all have to be of the same one
T maxtemplate(T x, T y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}
template <typename A, typename U>
auto maxauto (A a, U b){ //auto is used because if A, or U is used, it will give the output in format of the input with that particular template so auto will give exact data type as output
 return (a>b)? a : b; // ternary operator can be used for different input data types but if else statements cant handle different data types.
}
int main(){
 std::cout << maxtemplate(1.3,2.4) << '\n'; // this will accept all types of data but inputs should be of same type
 std::cout << maxauto(1,2.5) << '\n'; //this will accept all data types with different data types of input, BUT will give output of only the type function is, for T, input is of int type and function hence the output will be int only even if U is a double
}