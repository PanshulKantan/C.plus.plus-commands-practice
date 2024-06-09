#include <iostream>
int validityeven(std::string x);
int singledigit(int num);
int validityodd(std::string x);
int main(){
    int result;
    using std::cout;
    using std::cin;
    std::string x;
    cout << "Please enter your card number: ";
    cin >> x;
    if(x.length()==16){
        cout << "checking validity...";
    } else{
        do{
            cout << "Given card number was not of 16 digits please enter 12 digit number: ";
            cin >> x;
        }while(x.length() != 16);
        cout << "Checking validity..." << '\n';
    }
    result = validityeven(x) + validityodd(x);
    if(result%10 == 0){
        cout << "Your card is valid";
    } else{
        cout << "Card not valid";
    }
}
int singledigit(int num){
    return num%10 + (num/10)%10;
}
int validityeven(std::string x){
    using std::cout;
    int sum = 0;
    for(int i=x.size()-2; i >= 0; i -=2){
        sum += singledigit((x[i] - '0')*2);
    }
    return sum;
}
int validityodd(std::string x){
    int sumodd = 0;
    for(int j=x.size()-1; j>=0; j-=2){
        sumodd += x[j]-'0';
    }
    return sumodd;
}