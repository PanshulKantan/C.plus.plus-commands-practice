/* #include <iostream>
int main(){
    using std::cout;
    using std::cin;
    int number;
    cout<< "enter a positive number: ";
    cin >> number;
    while (number < 0){
        cout << "positive bola hai saatvi fail ";
        cin >> number;
    }
    cout << "dimag to hai " << "number is " << number;
}   
this is the code you can write by while statement, but you can make it shorter by using do while command here is how */

#include <iostream>
int main(){
    int number;
    do{
        std::cout << "enter a positive number: ";
        std::cin >> number;
    } while(number < 0);
    std::cout << "number is " << number;
}

/* but note that you cant change the code for do while condition, 
like it will perform the same thing but in while, you can change the interaction way,
 like you can print a different thing after that, but in do while, it does the same thing initially and in the loop after that */