#include <iostream>
int main(){

    /*for is used to loop a particular command a particular number of times
    the format is you write for, then you define the integer with i (which stands for index but letter doesnt really matter), then 
    we define the end number (till where the counting wants to go), and then the skips (how many gaps between each integer)*/


    for(double i=1; i <=10; i++){

        //here we define an integer starting from 1 till 3 with only gape of single integer between each, hence 1,2,3 so the std::cout happens 3 times

         if(i==5){
            //break command will break the loop hence it will print 1,2,3,4 only and breaks it afterwards.
            break;
            //or continue
        } 
            std::cout << i << '\n';
            
    }
    std::cout << "lol";


    //also that like break, we can use continue; which will skip that particular number.
     //if we simply write cout << i; then it writes the numbers itself as 1,2,3
    // to change the gaps, we use i+=2, this means the gaps between each integer is 2, and if we start from 1, it goes 1,3,5,7,9, etc.
}