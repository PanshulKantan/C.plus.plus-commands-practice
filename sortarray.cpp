#include <iostream>
void sort(int num[], int size);
int main(){
    using std::cout;
    using std::cin;
    int num[] = {5,6,2,7,1,8,9,22,18};
    int size= sizeof(num)/sizeof(int);
    sort(num, size);
    for(int i=0; i<9; i++){
        cout<< num[i] << '\n';
    }
}
void sort(int num[], int size){
    int temp;
    for(int i=0; i<size-1; i++){
// for each index in sequence, adjacents are compared and assigned, mostly get assigned and sorted from the last.

       // j>size-1 will also work.
        for(int j=0; j<size-i-1; j++){
// it means, starting from 0 all the adjacent sides will be compared
            if(num[j]>num[j+1]){
                temp = num[j];
                num[j]= num[j+1];
                num[j+1]=temp;  
// the value if greater or less, can be swapped by transferring the swapping value to temperory box, assigning the correct value and placing that initial value in box to the swapped place
            }
        }
    }    
}