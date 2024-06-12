#include <iostream>
int main(){
// format of dynamically allocating a memory
    int *score = NULL;  // 1) make a null pointer for the one you want to allocate memory in heap.
    int size;
    int *pSize = &size;
    std::cout << "What is the size of class?: ";
    std::cin >> *pSize;
    score = new int[*pSize]; // 2) set that memory to a 'new' memory with mentioning of the data type and if its an array, use [] and size of it.
    for(int i=0; i< *pSize; i++){
        std::cout << "Enter grade " << i+1 << ") ";
        std::cin >> score[i] ;
    }
    delete[] score; //this is optional but preffered as it is in heap memory so chances of memory leakage
}