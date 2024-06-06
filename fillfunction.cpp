#include <iostream>
#include <string>
int main(){
    using std::cout;
    int size = 100;
    std::string food[size];

// fill function is used to fill an array with common entries with format fill(array name + begining point, array name + ending point, value to fill)
    fill(food + 0, food + size/2, "pizza");
// fills pizza in array from starting to mid of the array hence 50 if size is 100 

    fill(food +size/2, food+size, "creampie");
// fills creampie starting from that ending of pizza meaning half of array to the end termed as size with value "creampie"

    for(int i=0; i<size; i++){
        cout << food[i] << '\n';
    }
}