#include <iostream>
#include <string>
int main(){
    using std::cout;
    using std::cin;
    int input;
    std::string food[5];
    cout << "Enter food you would like to eat according to the series given below and press q whener you want to final it: " << '\n';
    for(int i=0; i<5; i++){
        std::string temp;
        cout << i+1 << ") ";
        std::getline(std::cin, temp);

// we use temp as a storage as if we enter q, we dont want it to store it in array and hence print that too 
        if(temp == "q"){
            break;
        }
        else if(temp.empty()){
            break;
// so if temp != q, we put all variables into the array and we have the final array list without q
        }else{
            food[i]=temp;
        }
    }
    cout << "Your final order is listed below :- " << '\n';
// note that food[i].empty() is a boolean expression, if we use it in any domain, it will use 0 if its false or else 1 if true
    for(int i=0; !food[i].empty(); i++){
        cout << food[i] << '\n';
    }
}