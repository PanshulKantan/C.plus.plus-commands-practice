#include <iostream>
#include <string>
using std::cout;
using std::cin;

/*
void command is a function command used to define a particular function or a set of code we might use in different cases in the code
its not a part of int main() so we write it differently then we write int main(), 
we have to code that in different formats with respect to where have we written the void function
YOU CANNOT WRITE VOID INSIDE INT MAIN.
*/

/* 
if you want to write void trial(); below the int main, it wont be able to print what you want 
as it will go according to sequence so you at least have to write void trial (); once above int main */


/* also note that it wont matter whatever variable you place inside void as whatever you put in first 
will become the one you define first in the void command inside the function 
so x= a and y = b*/
void trial(int x, int y);
int main(){

    int num1;
    int num2;
    num1 = 5;
    num2=8;

    /*if you want to use the variables assigned with integers inside int main in the void code, 
    you have to put those variables as an 'argument' (or inputs to show that we will use it).*/
    trial(num2, num1);
}

/* note that in this void trial, the argument have different integers.
it wont matter because void trial doesnt know anything going on inside int main.
so it automatically assign the variable you put inside void corresponding to the values in int main
suppose you put int a first and int b firs (like the way written below in the code).
it will automatically assign it as A=NUM1 AND B=NUM2 because inside int main, the sequence of trial(num1 num2) is the
thing which defines int a and int b
ALSO NOTE THAT YOU HAVE TO DEFINE THE TYPE SUCH AS INT, DOUBLE, STRING, ETC */
void trial(int a, int b){
    cout << a << '\n';
    cout << b;
}


/*  THE CODE WRITTEN BELOW IS ALSO CORRECT 

#include <iostream>
#include <string>
using std::cout;
using std::cin;
void trial(int a){
    cout << a;
}
int main(){
    int num;
    num = 5;
    trial(num);
} 

*/
