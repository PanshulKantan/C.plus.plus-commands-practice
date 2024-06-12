#include <iostream>
int main(){
    // dynamic memory is a flexible memory which is stored in heap(main source) rather than stack(defined memory size)
    // as in some codes we mmight not have an idea how large the input size might be so we take as much as size we want from heap
    // it is usually a memory allocated while running or compiling the programme.
    // its code is 'new'.
    int *pointer = NULL;
    pointer = new int; // note that new int is a memory not an integer format and pointer is a memory (*pointer is the value not the memory) 
    // hence both are of equal format (undefined memory= memory)
    *pointer = 20;
    std::cout << pointer << '\n'; // allocated memory picked up from heap
    // if written pointer+1, it will get ahead of 4 bytes (int) 
    std::cout << *pointer;
    delete pointer; // it is deleted when memory allocated is of no use anymore, if not deleted may cause memory leak as it is from heap
}
// It is of the best use if we want to use array but the number of inputs is itself an input, like you have to enter that how many inputs there has to be
// which creates a barrier of what should be the size of the file.
