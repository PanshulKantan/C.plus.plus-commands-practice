#include <iostream>


int main (){
    using std::cout;
    using std::endl;
  

    std::string name;

    int age;

    /*when we use the std::cin BEFORE the getline function, there is a '/n' new line function after the std::cin
    and hence, the getline function assumes that as an input and hence we dont see our input value*/
    cout <<"what is your age son?: ";

    //for input, we use cin instead of cout
    std::cin >> age;


    cout << "whats your name son?: ";   
    //std::cin >> name; (this command only reads the very first word you write and ignore the rest)
    std::getline(std::cin >> std::ws, name);
    //(std::cin >> std::ws will reject the newline characters and will only accept the input values)




    //this is used incade the input line has a space in it and its a sentence instead of word
    
    cout << "hello " << name << "!" << endl;
    cout << "you are probably " << age << " years old right?";

    return 0;
}

/*          IMPORTANT:       jon jacob jingleheimer-     cin >> fullName; // reads John into fullname
                                                        getline(cin, fullName); // reads  Jacob Jingleheimer Schmidt into fullname, 
                                                                                                             // replacing John
                                                        cout << fullName << endl; // prints  Jacob Jingleheimer Schmidt   
           

           getline(cin, fullName); // reads John Jacob Jingleheimer Schmidt into fullname, 
cout << fullName << endl; // prints John Jacob Jingleheimer Schmidt      */