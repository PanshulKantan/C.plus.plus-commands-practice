#include <iostream>
#include <string>
using std::cout;
using std::cin;
void bakepizza();
void bakepizza(std::string topping1);
void bakepizza(std::string topping1, std::string topping2);
int main(){
    bakepizza("pineapple", "paneer");
}
void bakepizza(){
    cout << "here is your pizza ";
}
void bakepizza(std::string topping1){
    cout << "here is your " << topping1 << " pizza";
}
void bakepizza(std::string topping1, std::string topping2){
    cout << "here is your " << topping1 << " and " << topping2 << " pizza";
} //this just proves that there can be same named voids, the insides of void bakepizza(), the command in () is called parameter
// the entire bakepizza() is called function signature