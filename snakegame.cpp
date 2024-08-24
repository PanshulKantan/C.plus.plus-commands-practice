#include <iostream>
#include <ctime>
#include <string>
void field();
void snake();
int main(){
    field();
}
void snake(){
    char snake = 'o';
}
void field(){
    using namespace std;
    std::string gamefield [][1]={{"------------------------------"},
                            {"|                            |"},
                            {"|                            |"},
                            {"|                            |"},
                            {"|                            |"},
                            {"|                            |"},
                            {"|                            |"},
                            {"|                            |"},
                            {"|                            |"},
                            {"|                            |"},
                            {"------------------------------"},};
    for(int i=0; i<11; i++){
        for(int j=0; j<1; j++){
            std::cout << gamefield[i][j] << '\n';
        }
    }
}
