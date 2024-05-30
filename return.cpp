/* 
there is a difference between return and void
return is used to return a value back to the caller (the particular home which demands for the value like int main())
but like int main(), you can return a value to other callers too
it is mainly used to create functions in which input is resulted with an output for the function
which is executed by return command as it returns the value the way we code it 
while in void, it is MADE to execute the code inside it whenever the int main() calls it instead of giving an output
the way void is designed, we cant use return command in void

the format goes same like void but instead of void you write the type of value you want in return and input like double, int etc
*/

#include <iostream>
int length;

/* 
here, instead of void we wrote int telling that we want integer providing function
square is just the name we choose (we want to make a function which squares a number)
and below it we write what we return after putting in the values
inside () of int square () is just the argument we use inside main just like void 
*/
int square(int a){
    return a*a;
}
int main(){
    std::cout << "length of square: "; 
    std::cin >> length;
    int result = square(length);
    std::cout << "area is: " << result;

    // mistake: you might write cout << "area is: " << square; but note its a function, not any value, it just calculates
}