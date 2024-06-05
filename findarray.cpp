//This code asks for an input between 1 and 10 and it gives the index of that integer
#include <iostream>
int search(int num[], int value, int size);
int main(){
    using std::cin;
    using std::cout;
    int num[] = {1,2,3,4,5,6,7,8,9,10};

//defining size in the caller in which array is defined is important if you dont mention the counter in array as different callers wont see the number of inputs in array.
    int size= sizeof(num)/sizeof(int);
    int value;
    int index;
    cout << "Enter the number you want to search index of: ";
    cin >> value;
    index= search(num, value, size);
    if(index == -1){
        cout << "Index doesnt exist";
    }
}
int search(int num[], int value, int size){
    using std::cin;
    using std::cout;
    for(int i=0; i<size; i++){
        num[i];
        if(num[i]==value){
            std::cout << "your index is " << i;
            return i;
        }
    }
    // return -1 only occurs when there is no value provided by the computer so it can be used like else statement if we dont find any integer of array.
    return -1;
    
}