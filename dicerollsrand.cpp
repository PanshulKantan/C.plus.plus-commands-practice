#include <iostream>
//always add ctime header file to add a seed of random number generator
#include <ctime>
using std::cout;
int main(){

    //this is used to seed the random variable generator (learn)
    srand(time(NULL));

    /*
    to make a dice, we take the remainder of division of variable by 6, 
    but then the value can also be 0 and never be 6 cuz its divisible
    and hence we +1 in it so 0 becomes 1 and 5 becomes 6 and they are the only numbers a dice can provide 
    
    LETS MAKE 3 DICE ROLLS NOW 
    */
    int num1= (rand()%6)+1;
    int num2=(rand()%6)+1;
    int num3=(rand()%6)+1;

    cout << num1 << '\n';
    cout << num2 << '\n';
    cout << num3 << '\n';
    /* 
    or you can write 
        int num= rand();
    cout << (num % 6)+1;

    it works the same
    */
    return 0;
}