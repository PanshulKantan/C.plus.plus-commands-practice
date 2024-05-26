#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    int monthnumber;
    cout << "please enter the month number ";
    cin >> monthnumber;
    //switch works like if statements and it makes task easier as instead of else if, just use case and their respective replies
    switch(monthnumber){
        case 1:
        cout << "january";
        break;
        case 2:
        cout << "february";
        break;
        case 3:
        cout << "march";
        break;
        case 4:
        cout << "april";
        break;
        case 5:
        cout << "may";
        break;
        case 6:
        cout << "june";
        break;
        case 7:
        cout << "july";
        break;
        case 8:
        cout << "august";
        break;
        case 9:
        cout << "september";
        break;
        case 10:
        cout << "october";
        break;
        case 11:
        cout << "november";
        break;
        case 12:
        cout << "december"; 
        break;
        //default works like else command
        default:
        std::cout << "please enter a number between 1 to 12 sweetheart";
    }
}

    