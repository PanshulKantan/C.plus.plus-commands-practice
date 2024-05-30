#include <iostream>
#include <string>
using std::cout;
using std::cin;
void bal (int bal);
double depos(int dep);
double with(int with);
int main(){
    int choice;
    double balance = 0;
    double withdrawl = 0;
    double deposit =0;
    do{
         cout << "************BANK**************" << '\n';
         cout << "Please enter what you want to do" << '\n';
         cout << "Enter 1 to check balance" << '\n';
         cout << "Enter 2 to deposit money into your account \n";
         cout << "Enter 3 to withdraw money \n";
         cout << "Enter 4 to exit \n";
         cout << "ENTER HERE: ";
         cin >> choice;
      switch(choice){
        case 1:
            balance += withdrawl -= deposit;
            bal(balance);
            break;
        case 2:
            balance += depos(deposit);
            cout << "Your balance now is " << balance << '\n';
            break;
        case 3:
            balance -= with(withdrawl);
            cout << "Your balance now is " << balance << '\n';
            break;
        case 4:
            cout << "have a nice day" << '\n';
            break;
        default:
            cout << "please enter valid number" << '\n';
            break;
    }
    }while(choice != 4);
}
void bal(int bal){
        cout << "your balance is " << bal << '\n';
}
double depos(int dep){
    cout << "Enter amount you want to deposit: ";
    cin >> dep;
    return dep;
}
double with(int with){
    cout << "Enter amount you want to withdraw: ";
    cin >> with;
    return with;
}
/* when we were firstly writing the code, we directly tried to make codes inside the cases 
by calculating it in itself, but as the inputs are changing like withdrawls, deposits, etc, which also changes balance, 
we use void to define them and hence use +=, -= type of operators to easily define it */
