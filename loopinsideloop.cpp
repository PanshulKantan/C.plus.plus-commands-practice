#include <iostream>
int main (){
    int rows;
    int columns;
    char symbol;
    std::cout << "Number of rows: ";
    std::cin >> rows;

    std::cout << "number of columns: ";
    std::cin >> columns;

    std::cout << "symbol you want to choose: ";
    std::cin >> symbol;

/*loop inside loop is just a for command inside a for command in which the for command does repeat itself, and when the process is over,
that is one single loop, and hence that loop is runned again the number of times its inside the other for loop */
    for (int i=1; i<=rows; i++){
    for(int j=1; j <=columns; j++){
        std::cout << symbol << ' ';
    }
    //this '\n' is important to change the output of one loop to the next line it should be out of inner for loop but inside the outer for loop.
    std::cout << '\n';
    }
}