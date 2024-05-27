#include <iostream>
int main(){
        int f;
        int c;
        using std::cout;
        using std::cin;
        char t;
        cout << "whats the temperature unit you have? \n";
        cout << "please enter c for celcius and f for fahrenheit: \n";
        cin >> t;

        //ternary operator can make this code shorter because at the end it only requires 2 conditions, c and f.
        switch(t){
            case 'f':
            cout << "please enter fahrenheit value: \n";
            cin >> f;
            cout << (f-32)*5/9 << " degree celcius";
            break;
            case 'c':
            cout << "please enter celcius value \n";
            cin >> c;
            cout << c*9/5+32 << " degree fahrenheit \n";
            break;
            default:
            cout << "bhai kuch to dhang se karliya kar upar likha hai kya kya dalna hai";
        }

}