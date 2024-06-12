#include <iostream>
#include <ctime>
void field(char space[]);
void playerattack(char space[], int *attack, char player);
void computerattack(char space[], char comp, int *random);
int main(){
    char space[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char comp = 'O';
    int attack;
    int random;
    do{
    field(space);
    playerattack(space, &attack, player);
    if(space[0]==' ' || space[1]==' ' || space[2]==' ' || space[3]==' ' || space[4]==' ' || space[5]==' ' || space[6]==' ' || space[7]==' ' || space[8]==' '){
    computerattack(space, comp, &random);}
    else{
        field(space);
        break;
    }
    }while(space[0]==' ' || space[1]==' ' || space[2]==' ' || space[3]==' ' || space[4]==' ' || space[5]==' ' || space[6]==' ' || space[7]==' ' || space[8]==' ');                     
}
void field(char space[]){
    using namespace std;
    cout << "     " << "|" << "     " << "|" << "     " << '\n';
    cout << "  "<< space[0] <<"  " << "|" << "  "<< space[1] <<"  " << "|" << "  "<< space[2] <<"  "<< '\n';
    cout << "_____|_____|_____"<< '\n';
    cout << "     " << "|" << "     " << "|" << "     " << '\n';
    cout << "  "<< space[3] <<"  " << "|" << "  "<< space[4] <<"  " << "|" << "  "<< space[5] <<"  "<< '\n';
    cout << "_____|_____|_____"<< '\n';
    cout << "     " << "|" << "     " << "|" << "     " << '\n';
    cout << "  "<< space[6] <<"  " << "|" << "  "<< space[7] <<"  " << "|" << "  "<< space[8] <<"  "<< '\n';
    cout << "     " << "|" << "     " << "|" << "     " << '\n';
}
void playerattack(char space[], int *attack, char player){

    using namespace std;
    while(true){
    cout << "Choose a numer between 1-9 according to the sequence: ";
    cin >> *attack;
    if(*attack >=1 && *attack <=9 && space[*attack-1]==' '){
        space[*attack-1] = player;
        break;
     }
    }
}
void computerattack(char space[], char comp, int *random){
    while(true){
        srand(time(0));
        *random= rand()%9;
        if(space[*random]==' '){
            space[*random]=comp;
            break;
        }
    }
}
