#include <iostream>
#include <string>
int main(){
    using std::cout;
    // first [] represent rows and second one represent column
    std::string cars[][3]= {{"bmw", "audi", "swift"},
                           {"tata nano", "honda", "toyota"},
                           {"gtr", "chevrolet", "mg"}};   

    int rows= sizeof(cars)/sizeof(cars[1]);
    // rows is calculated by total size divided by size of one row
    int column= sizeof(cars[0])/sizeof(cars[0][1]); 
    //VVERY IMPORTANT- column, if we simply use sizeof(cars), it will entirely be used and we cant determine one column as a term  
    // so we take total size of first row, divided by size of single  input to tell how many terms are there and hence number of columns=number of terms in single row
    for(int i=0; i<rows; i++){
        for(int j=0; j<column; j++){
            //for bubble loop or else if we want to print single row, it will give hash of that entire array having all inputs.
            cout << cars[i][j] << " ";
        }
        cout << '\n';
    }
}