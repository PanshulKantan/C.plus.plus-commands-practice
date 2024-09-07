#include <iostream>
template <typename T>  
T max(T a, T b);        // in templates, you can pass inputs in function by values or by reference, this is by value

template <typename t> 
const t max_ref(const t&a, const t&b);  // this template function has inputs passed by reference

// note that you can also write         const t& max_ref(t &a, t &b)        t& max_ref is only an indicator that this function has inputs passed by reference

int main(){

    double x{8.4};
    double y{4.6};  

    std::cout << "original memory address of first input (x) " << &x << std::endl;
    std::cout << "original memory address of second input (y) " << &y << std::endl;

    double result1 = max(x, y); // we will get to know that just like functions, if templates get the inputs passed by value, the memory address of the same value will be different as of in the maine function of the same

    // hence x defined in int main have a different memory address as compared to that in template function
    std::cout << "result for max with pass by value: " << result1 << std::endl;


    double result2 = max_ref(x,y);      // in this, inputs are being provided in the format of pass by reference, hence the memory address will remain the same for the inputs in int main and template function
    std::cout << "result for max_ref with pass by reference: " << result2 << std::endl;

    max(1,2);   // note that if a function has both printing command and return values, just calling the function will allow the printing command and the others
    // if we want to get the return value or the calculated value, we have to assign it to a variable, suppose answer of max(1,3) is 3 which we have to return, 
                     //  we have to assign a variable (int x = max(1,3), and then write std::cout << x) EVEN AFTER THAT ALSO, IT WILL PRINT BOTH PRINTING COMMAND AND RETURN VALUE
                                // SO DONT THINK THAT WRITING THE FUNCTION AND THEN ASSIGING IT TO A VARIABLE AND PRINTING THAT WILL GIVE BOTH TOGETHER, IT WILL PRINT THE PRINTING COMMAND 2 TIMES
    int j = max(1,2);   // we wrote the value and assigned it to j, but unknowingly we also summoned the max function so it will perform the function but only printing part (we already did it in previous command)
    std::cout << j;     // this will only print the returned value
}

template <typename T> T max(T a, T b){
    T n = (a>b)? a:b;
    std::cout << "memory address of first input in pass by value format: " << &a << std::endl;
    return n;
}

template <typename t> const t max_ref (const t&a, const t&b){

    const t m = (a>b)? a : b;   // if written t& max_ref ( t &a, t &b), you have to write const t& m because m is something you return and format of m has to be the same as the function (t& max_ref) as we are returning m, it should have same format

    std::cout << "memory address of first input in pass by reference format: " << &a << std::endl;  // it will have same memory address as of int main function as we are passing the inputs by reference

    return m;
}