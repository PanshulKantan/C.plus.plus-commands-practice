#include <iostream>
#include <ctime>
int main(){
    int inp;
    std::cout << " Guess the number between 1-10: ";
    srand(time(NULL));
    int x = rand()%10+1;
    do{
        std::cin >> inp;
        if(inp > x){
            std::cout << "High. Try again:  ";
        } else if (inp < x){
            std::cout << "Low. Try again: ";
        } else{
            std::cout << "CORRECT! YOU WON! THANKS FOR PLAYING.";
        }
    } while(inp != x);
}