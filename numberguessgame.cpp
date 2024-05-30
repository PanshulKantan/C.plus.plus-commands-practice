#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
int guess;
int main(){
    srand(time(0));
    int num = rand() % 100 +1;
    do{
    cout << "Guess the number: ";
    cin >> guess;
    if(guess < num){
        cout << "high \n";
    } 
    else if (guess > num){
        cout << "low \n";
    }
    } while(guess !=  num);

    cout << "correct! the number was " << num;
    return 0;
}