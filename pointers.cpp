#include <iostream>
#include <string>
using namespace std;
int main(){
    int x;
    cout << "Enter value: ";
    cin >> x;
    // pointer is a variable which stores memory address of another variable in which value/s is/are assigned.
    int *pointer = &x;
    // it is useful while making lots of inputs and outputs type code as we want all data to be stored and shared in all callers instead of giving each one seperately
    cout << *pointer;
    // if youve written *, it will print the located value as &x but if only written cout << pointer, it will print the memory address.
    /*
    its useful to locate other variables to the same data, if you just set a variable and make it equal to an array, it will
    read the whole data, while if you set a pointer as a variable, it will simply refer to that array, hence less memory storage

    ALSO VERY IMPORTANT-
    DIFFERENCE BETWEEN & AND * IS THAT & LOCATE THE MEMORY ADDRESS OF THE VARIABLE ITSELF 
    WHILE * IS A MEMORY ADDRESS BUT ITS WORK IS ONLY TO POINT AT THE MEMORY ADDRESS IT IS EQUALISED WITH HENCE LESS STORAGE AND MORE EFFECIENCY
    BUT WHEN YOU CALL A FUNCTION, ITS ESSENTIAL TO USE THE EXACT MEMORY ADDRESS (&) AND NOT A POINTER WHICH IS A FORMAT AND NO LOGIC BEHIND IT
    YOU CAN WRITE VOID SUM(INT *A, INT *B), BUT YOU HAVE TO RIGHT SUM(&A,&B) AND NOT * BEFORE THEM, AS YOU HAVE TO ENTER THE EXACT MEMORY ADDRESS YOU HAVE TO WORK ON
    AS IT IS ALL ABOUT MEMORY ADDRESS, HENCE YOU CANT ASSIGN IT A DIRECT VALUE LIKE INT *X=20, ETC BUT INT *X = &Y.
    */
}