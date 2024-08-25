#include <iostream>
#include <iomanip> //used for setprecision

int main () {

    /*first we declare what inputs are being taken, like integers, etc and assign a variable like x
    and we declare the value of x suppose 5, then the variable will be used as the number assigned
    wherever we use x, the number 5 will be considered*/
   
    int x;
    x=5;
    //or you can use int x = 5;

    // also you cant define a variable like int in a different way

    int age{}; // this initializes the integral value of age to be 0
    int AGE{10}; // this gives the value to the variable as 10
    // also note that int age{2.9} wont be taken and give an error
    int Age(2.9); // this will work but it will implicitely convert the value inside it to integer so 2.9 will chop off 0.9 and will give 2
    // ALSO NOTE THAT WE CAN CHANGE THE SIGNS OF THE INT VALUE WITH RESPECT TO WHAT WE WANT
    signed int x{-300}; // value of x is -300
    unsigned int x{-300}; // this time the value of x is 300 as we want the value unsigned, basically like a mod
    // short short unsigned int, long signed int, unsigned lon long int, can also be used it just helps saving storage THEY ONLY WORK FOR INTEGERS



    double y = 8.12345;
    std::cout << std::setprecision(4); //gives 8.123 as it cut everything after 4 digits
    std::cout << std::fixed;
    std::cout << std::setprecision(2); // this will only cut everything after 2 digits WHICH ARE after decimals (numbers before decimals wont be harmed)

    std::cout << std::scientific;
    std::cout << std::setprecision(2); // this will use scientific notation after the number of digits being set
    // for ex for 8561.23, it will set or 2 and then use scientific notation and give 8.6e+3 where e+3 means 10^3   IMPORTANT


    // double is used for decimal numbers
    // there are 2 more variables which represent fractions which are float and long double
    float a {1.12435436524113220f}; // 0f at the end is the format for float
    long double b {1.13425244230L}; // 0L is a format for long double
    // for double, setprecision(value) can cut off the non needed part, for 8.12345,

    std::cout << x << std::endl;
    std::cout << y << '\n';
    

    char grades = 'A';
    /*char is used for a single character
    also, when the variable assigned, use ' ' to define them or else it will show error*/
    //there are ascii numbers assigned for chars so you can also write char grades = 65 which means A in ascii table
    // if you cout grades, it will print A.
    // BUT TO PRINT THE NUMBER ITSELF, std::cout << "grades: " << static_cast<int>(grades) THIS WILL PRINT THE INTEGER ITSELF (65 FOR A)

    std::cout << grades << '\n';

    bool choice = true;
    bool answer=false;
    //bool is used for only true or false. NOTE THAT COMPARISON OPERATORS LIKE >, < OR = WORKS LIKE BOOLEANS
    std::cout << (2==2); // this is a simple equation as it is true, it will print 1 which is integral value of true
    std::cout << std::boolalpha; //enabling boolalpha will print true and false instead of 0 or 1 in boolean statements
    std::cout << (2==2); // this time, BECAUSE OF BOOLALPHA it will print true and not 1, this is the use of it
    std::cout << std::noboolalpha; //this will disable boolalpha


    std::string wassup = "Look at my progress bitch";
    /*string is used for a sequence or even a sentece having characters
    also note, for char, we use ' ' , but for string, we will use " " and std::string with the variable */

    std::cout << wassup << std::endl;

    //you can use string between some print statements too
    std::cout << "You were the one who was mocking me right? " << wassup << '\n';


    /*use const command to fix a constant value or else even if you assign a value to a variable, and later put that variable 
    to something else, the value wont be that initial value anymore */

    const char z = 'O';
    std::cout << z << std::endl;

        return 0;
}