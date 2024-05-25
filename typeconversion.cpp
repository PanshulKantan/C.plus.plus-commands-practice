#include <iostream>
int main(){
  int x=7;
  int y=10;

  //this format is used to implicitely change the value type, for ex from int to double
    int z = (double)x/y * 100;

    //you can also use "int x= (double) 3.1415"
    std::cout << z << "%";

}