#include <iostream>
#include <string>
#include <ctime>
using std::cout;
using std::cin;
using std::string;
int start;

//for computer attack
string r= "ROCK";
string p= "PAPER";
string s= "SCISSOR";
string m;

//for your attack
int attack;
string R = "ROCK";
string P = "PAPER";
string S = "SCISSOR";
string M;
void game(int attack, int num);
int main(){
    srand(time(NULL));
        do{
        int num = rand()%3+1;
        //defining attacking strings for computer to print its command
        switch(num){
        case 1:
        m = r;
        break;
        case 2:
        m=p;
        break;
        case 3:
        m=s;
        break;
     }
                    
        cout << "start game? Enter 1 for yes and any other integer for no: ";
        
        cin >> start;
        if (start != 1){
        break;
        }
        cout << "1 FOR ROCK 2 FOR PAPER 3 FOR SCISSOR. CHOOSE YOUR ATTACK: ";

        cin >> attack; 

        //defining our attacks to print strings of our command
        switch(attack){
        case 1:
        M = R;
        break;
        case 2:
        M = P;
        break;
        case 3:
        M = S;
        break;
        default:
        cout << "Enter 1, 2, or 3 only \n";
        continue;
     }
        game(attack, num);
                
        } while(start == 1);
         cout << "Had fun, hope to see you soon ^^ ";

}

//setup of the game
void game(int attack, int num){
    if(num == 1){
        switch(attack){
            case 1:
                cout << "COMPUTER CHOSE " << r << '\n';
                cout << "YOU CHOSE " << R << '\n';
                cout << "*****ITS A TIE, TOUGH FIGHT***** \n";
                break;
            case 2: 
                cout << "COMPUTER CHOSE " << r << '\n';
                cout << "YOU CHOSE " << P << '\n';
                cout << "*****HAHAA! YOU WON!***** \n";
                break;
            case 3:
                cout << "COMPUTER CHOSE " << r << '\n';
                cout << "YOU CHOSE " << S << '\n';
                cout << "*****YOU LOST KIDDO >:)***** \n"; 
            default:
                cout << "ENTER BETWEEN 1,2 OR 3, YOU GET A PENALTY HENCE YOU HAVE TO PLAY IT AGAIN  >>>:((((( \n ";
        }
    } else if(num == 2){
        switch(attack){
            case 1:
                cout << "COMPUTER CHOSE " << p << '\n';
                cout << "YOU CHOSE " << R << '\n' ;
                cout << "*****YOU LOST KIDDO >:)***** \n"; 
                break;
            case 2:
                cout << "COMPUTER CHOSE " << p << '\n';
                cout << "YOU CHOSE " << P << '\n';
                cout << "*****ITS A TIE, TOUGH FIGHT***** \n";  
                break;
            case 3:
                cout << "COMPUTER CHOSE " << p << '\n';
                cout << "YOU CHOSE " << S << '\n';
                cout << "*****HAHAA! YOU WON!***** \n";  
                break;
            default:
                cout << "ENTER BETWEEN 1,2 OR 3, YOU GET A PENALTY HENCE YOU HAVE TO PLAY IT AGAIN  >>>:((((( \n ";    
        } 
    } else if(num == 3){
        switch(attack){
            case 1:
                cout << "COMPUTER CHOSE " << s << '\n';
                cout << "YOU CHOSE " << R << '\n';
                cout << "*****HAHAA! YOU WON!***** \n";
                break;
            case 2:
                cout << "COMPUTER CHOSE " << s << '\n';
                cout << "YOU CHOSE " << P << '\n';
                cout << "*****YOU LOST KIDDO >:)***** \n";
                break;
            case 3:
                cout << "COMPUTER CHOSE " << s << '\n';
                cout << "YOU CHOSE " << S << '\n';
                cout << "*****ITS A TIE, TOUGH FIGHT***** \n";
                break;
            default:
                cout << "ENTER BETWEEN 1,2 OR 3, YOU GET A PENALTY HENCE YOU HAVE TO PLAY IT AGAIN  >>>:((((( \n ";
        }
    }
}