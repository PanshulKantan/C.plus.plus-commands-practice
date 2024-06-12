//classes are a bunch of attributes an object (physical object) can have an tasks the object can perform
#include <iostream>
class human{
    public:
    std::string name;
    int age = 17; // you can also predefine some of the attributes in a class itself
    std::string occupation; // THESE ARE ATTRIBUTES WHICH MEANS PROPERTY THE CLASS CAN HAVE, LIKE AGE NAME OCCUPATION
    // method is something an object can perform like tasks etc.
    //like- 
    void eat(){
        std::cout << "this person is eating" << '\n';
    } // these are methods.
    void sleep(){
        std::cout << "this person is sleeping";
    }
    private: // if things are set on private, no one can change it in any class or caller.
    int kids= 10;


    //to make it accessible, we make another public attributes but its called getter as its only readable and not writeable
    public:
    int getkids(){
        return kids; // this will the private attribute only visible.
    }

    // to make private attributes both readable and writeable, you have to set a setter.
    void getkidswrite(int kids){
        this->kids=kids;
    }
};


class bachha : public human{    // THIS IS CALLED INHERITENCE, IT INHERIT ALL ATTRIBUTES AND METHODS FROM THE PARENT CLASS.
    void cry(){
        std::cout << "UUUUUWAAAAAAAAAA"; // you can do additional updates in it too.
    }
};



class car{
    public:
    std::string company;
    std::string model;
    int lifespan;

    car(std::string company, std::string model, int lifespan){      // THIS IS A CONSTRUCTOR, IT IS USED TO MAKE ASSIGNING OF ATTRIBUTES EASIER WHEN WANTED.
        this->company = company;
        this->model= model;
        this->lifespan= lifespan;
    }
};


    /*
    or else you can write
        car(std::string x, std::string y, int z){      // THIS IS A CONSTRUCTOR, IT IS USED TO MAKE ASSIGNING OF ATTRIBUTES EASIER WHEN WANTED.
        company = company;
        model= model;
        lifespan= lifespan;
    }                                 NO NEED TO USE THIS-> IF VARIABLES USED ARE DIFFERENT

    ALSO NOTE THAT WE CAN BUILD 2 CLASSES OF SAME NAME BUT DIFFERENT PARAMETERS LIKE PIZZA(STD::STRING TOPPING1) AND 
    PIZZA(STD::STRING TOPPING1, STD::STRING TOPPING2)
    */



int main(){
    human human1; //defining an object with human class and methods.
    human1.age=17;
    human1.name="panshul";
    human1.occupation= "isroscientist";
   // human1.kids =5; this will not work as it is set to private.
    //but after we set a setter, the new line will work written below
    human1.getkidswrite(20); // now, even if privately the kids number has been already assigned in class, its changed because of getters and setters hence the output will also be changed.

    std::cout << human1.getkids() << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';
    human1.eat(); // this is how to invoke a method.

    bachha bachha1;
    std::cout << bachha1.age << '\n';


    car car1("tesla", "s", 30); // THIS IS HOW TO USE CONSTRUCTOR, IT MADE ASSIGNING OF ATTRIBUTES EASIER.
    std::cout << car1.company << '\n';
}
