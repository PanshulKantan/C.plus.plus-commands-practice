#include <iostream>

int main(){


    size_t size = 10;   // in heap memory, the size of array is not fixed hence an integer defined can be variable, but in stack you HAVE TO RIGHT CONST INT BECAUSE IT SHOULD HAVE FIXED NUMBER OF ELEMENTS HENCE SIZE
    int *array1 = new int[size]; // this allocates an array dynamically in heap 
    int *array2 = new(std::nothrow) int[size] {}; // the { } initialises all the elements to 0 of that array, hence all 10 elements are equal to 0
    int *array3 = new(std::nothrow) int[size] {1,2,3,4,5}; // this now initialises the first 5 elements of that array to the numbers listed in it and rest to 0
    if(array2){  // this array3 in if else statement is a condition which checks wether array3 is nullptr or not, if it has no value, its nullptr
        std::cout << "Memory allocated successfully" << std::endl;
        for(int i = 0; i < size; i++){
            std::cout << "Element of array3 number " << i+1 << ": " << array2[i]  /* you can print element by array */ << " also written as " << *(array2+i) /* or by dereferencing the pointer array*/ << std::endl;
        }               // as array1 doesnt have any inputs it will print garbage values but array2 and array3 will work the way we predict
    }   else{
        std::cout << "Memory not allocated, nullpointer ";
    }
    delete [] array1;
    array1 = nullptr;

    delete [] array2;
    array2 = nullptr;

    delete [] array3;
    array3 = nullptr;       //deleting pointer arrays format is delete [] and it is important so that memory wont leak and nullptr is also important to save memory

    if(!array2){
        std::cout << "array 2 is allocated to nullpointer successfully";
    }
}  