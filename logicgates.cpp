#include <iostream>
int main (){
    int temp;
    bool sunny= false;
    using std::cout;
    using std::cin;
    cout << "whats the temperature?: ";
    cin >> temp;
    //if(temp >=0 && temp <=30){ (THIS ONE IS ALSO USED, $$ IS LIKE AND GATE, || IS LIKE OR GATE)
        if (temp <=0 || temp >= 30){
        cout << "damn thats dangerous";
    } else {
        cout << "thats fine\n";
    }

    //you can just write    if (sunny){}     as sunny is already defined as true in the code
    if (!sunny == true){
        // if (!sunny == true)    means if sunny= true because ! sign is for not gate and it is opposite of what the input is
        cout << "its sunny";
    }
}