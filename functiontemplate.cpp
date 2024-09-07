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


template <typename x>  x double_mult (x z, x y);     // like functions, you can declare a prototype before int and write the function after int main, but you have to define more as compared to functions hence template, typename, function name and arguments all have to be written


// Note that auto can also be used to just determine the variable type itself
/*
for example
        auto var1 {12}; will assign it as integer
        auto var2 {2.9}; as double
        auto var3{2.4320f} as float 
        auto var4{342.4220L} as long double



        for integers also,
        auto var5{123u} u means unsigned
        auto var6{21314uL} UL is unsigned long
        auto var7[2143412LL] LL means long long
*/
int main(){
 std::cout << maxtemplate(1.3,2.4) << '\n'; // this will accept all types of data but inputs should be of same type

 std::cout << maxauto(1,2.5) << '\n'; //this will accept all data types with different data types of input, BUT will give output of only the type function is, for T, input is of int type and function hence the output will be int only even if U is a double

 std::cout << double_mult<double>(2, 4.7) << std::endl;     // by this, you can explicitely declare the arguments to give result in double type and write double type in the argument even though you didnt declare a different template for it
 
 std::cout << double_mult<int>(2,4.7) << std::endl; // now this will explicitely give result in int even though a double is given as an input in it. strings wont work because you cant covert strings to numbers so as to multiply
}

template <typename x>       // like functions, you can declare a prototype before int and write the function after int main, but you have to define more as compared to functions hence template, typename, function name and arguments all have to be written
x double_mult (x z, x y){
    return z*y;
}
