#include <iostream>
#include <cmath>
int main(){
    using std::cout;
    using std::cin;
    int a,c,z;
    char b;
    cout << "first value: ";
    cin >> a;

    cout << "operation: ";
    cin >> b;

    cout << "second value: ";
    cin >> c;
    
    // "+" is used because its a string not a char and string has to be a sentence hence its quoted
    switch(b){
        case '+':
        cout << a+c;
        break;
        case '-':
        cout << a-c;
        break;
        case '*':
        cout << a*c;
        break;
        case '%':
        cout << a%c;
        break;
        case '^':
        cout << pow(a, c);
        break;
        case '/':
        cout << a/c;
        break;
        default:
        cout << "please enter mathematical operation dear";
    }

    
    
}