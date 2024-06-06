#include <iostream>
#include <vector>

//namespace is used to set a value for a variable which will be used everywhere, use "namespsace (name whtever you want) {assign value}"
namespace first {
    char x = 'A';
}
//you can use this to name more than one variables and just name them differently
namespace second{
    char x= 'B';
}
    //typedef is used to make a nickname/alias of a function like string, char, etc to make tasks easier (typedef (line) nickname;)
     typedef std::string text_t;
        //you can also use (using text_t=std::string)
int main() {
      /* note that namespace is given before int main (), after that you have to mention the namespace if you want to use the same
    variable used in int main() but as the name you defined in the name space
    or else the assigned value in the int main() will be used as it doesnt affect the code it only assigns the value */
    int x = 5;


    //you can also use "use namespace (name of the namespace)" to fix the namespace then you dont have to mention it everytime
    using namespace first;


     //you can also you "using namespace std / using std::cout" to reduce your work from std::cout to cout
    using std::cout;
    using std::endl;

    //to use the name variable, type ("that namespace name"::the variable assigned) to use the variable you want
    cout << second::x << endl;

     // if you dont mention namespace, it will use the value you have assigned or the used namespace in the int main()
    cout << x << '\n';
    text_t code = "this is typedef";
    cout << code;
           return 0; 
}