#include <iostream>

int main(){

    int x=5;

    x=x%2;

    /*or x+=1; , x++ (for adding 1 only)
     x-=1, x--(for subtracting 1 only), x=x-1
     x*=2(multiply), x/=2(divide)
     to give out the remainder as an output, use '%' sign
     BODMAS is used here also*/

    std::cout <<x;  
}