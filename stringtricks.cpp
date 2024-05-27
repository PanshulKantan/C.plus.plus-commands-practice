#include <iostream>
int main (){
    std::string name;
    std::cout << "please enter your full name: ";
    std::getline(std::cin, name);


    //name.length() defines or restricts the length of the string
    if(name.length() >= 12){
        std::cout << "itna bada :0";
    }

    //name.empty() defines that the string input is empty or input is submitted without any message (IT IS A BOOLEAN VALUE, IT MEANS THAT IT WILL JUST TELL IF THE INPUT IS EMPTY OR NOT)
    
     else if(name.empty()){
        std::cout << "kuch to likhle bhai sirf enter karne se ghar nahi chalta";
     }
     else{
        std::cout << "nice to meet you " << name;
    }
}

/*
 all commands with name is for std::string name; where the value of string/name is brocode

 
 name.clear();   cout<< name;                 is used to clear the string of "name" (should be in sequence, if you give string a name, then write name.clear(), it will clear the string and output will be empty)
 
 name.append("@gmail.com");   cout<< name;         is used to add another string in an input string(name for this one as it is NAME.append), usually for @gmail.com, it will print name@gmail.com if name is the input
  
  cout << name.at(3);       will print the 4th letter of the input string you put in, for example, in brocode, b=0, r=1, o=2, c=3 hence it will print c 

  name.insert(0, "@");  cout << name      will print inserting '@' in the gaps between the string, ex, in "brocode", it will print @brocode, for name.insert(2, "@"), it will print br@ocode

  cout <<  name.find('r');         will locate r in the string, in brocode, it will print 1 as COUNTING OF SEQUENCE IN C++ IS 0,1,2,3, and so on.

  cout << name.erase (0,2);         will erase the string values from the sequence 0 to 2 hence to output will be 'ocode' as in the command, 2 is not inclusive but 0 is. VERY IMPORTANT.

*/