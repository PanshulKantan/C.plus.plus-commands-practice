#include <iostream>
#include <string>
double sum(double price[]);
double SUM(double price[], int size);

int main(){

    double SUM(double price[], int size);

    using std::cout;

    double price[] = {1.09, 33.68, 2435.234};

//size defined for last type of code to print sum
    int size = sizeof(price)/sizeof(double);




// you can print each argument of an array with this method

    for(int i=0; i<3; i++){

        cout << price[i] << '\n';
    }
    cout << '\n';


// or else you can also use this method which is FOREACH LOOP, used for an iterable data set like array.
    for(double numbers : price){
// for each loop make syntax shorter, you just define array with one word you want, then : , then the array keyword, and use it however you want

        cout << numbers << '\n'; // here array price[] has given a nickname number, so it is used for cout.
    }
    cout << '\n';




// lets print the sum of all those numbers.
    cout << sum(price) << '\n';
    cout << SUM(price, size);
}



double sum(double price[]){
    double total = 0;
    // NOTE THAT I<3 HAS SPECIFIED THE QUANTITY. IT WONT WORK IF WE WRITE SIZEOF(PRICE)/SIZEOF(DOUBLE) AS ITS A DIFFERENT CALLER AND HENCE IT DOESNT REALLY KNOW THE EXACT NUMBER OF VALUE AS IT IS IN INT MAIN NOT THIS CALLER.
    for(int i=0; i<3; i++){
        total += price[i];
    }
    return total;
    std::cout << '\n';
}




//lets make the code with sizeof(),
    double SUM(double price[], int size){
    double TOTAL=0;
    //THIS WILL NOT WORK BECAUSE THE SIZE IS GIVEN IN THE DIFFERENT CALLER, HENCE YOU HAVE TO AVOID THIS CODE AND DEFINE IT IN INT MAIN WHERE THE SIZE IS GIVEN

   // for(int i=0; i<sizeof(price)/sizeof(double); i++){

    //this will work
    for(int i=0; i<size; i++){
        
        TOTAL += price[i];
    }
    return TOTAL;
}
