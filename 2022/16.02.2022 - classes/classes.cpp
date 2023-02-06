#include<iostream>

using namespace std;

// Classes have public and private parts
// By default, everything in a class is private!!
// Private - the class variables and functions are available only in the scope of the class.
// This means that when something is private, you can't access it from other 
// functions (like the main function).
// Public - you can access it wherever you want in the programme (main function,
// other functions)

class Pet {
    string name;
    string type;
    int killing_spree;
    
// Keyword used to specify public variables/functions
public:

    // A test function, see what happens if you move it to the private part.
    int test() {
        return 10;
    }

    // This is a pointer which is used to 
    // access the value of the fiels 'name'
    // for the object on which we're
    // performing a call to the get_name function.
    
    string get_name() {
        return this->name;
    }

    string get_type() {
        return this->type;
    }

    int get_killing_spree() {
        return this->killing_spree;
    }

    // this->name is accessing the place in the memory
    // where the class variable name is stored for 
    // the current object
    // name is just a parameter
    void set_name(string name) {
        this->name = name;
    }


    // The parameters in the setter functions
    // can be called how you want.
    // However, it is good practice to be called
    // the same as your class variables
    // This is an example how NOT to 
    // write a setter function!
    void set_type(string t) {
        this->type = t;
    }

    void set_killing_spree(int killing_spree) {
        this->killing_spree = killing_spree;
    }

    void display_info() {
        cout << get_name() << " is a/an " << get_type() << " and has killed: " << get_killing_spree() << endl;
    }
};

int main() {
    // This will allocate memory (we're using new)
    // for an object of type Pet*
    Pet* p = new Pet();
    Pet* dog = new Pet();
    
    // The object dog does not have any 
    // values set to its class variables.
    // But the class variables have default values:
    // for int it is 0, for float/double it is 0.0
    // for the strings it is null
    // Try to run the programme and see what the output is
    dog->display_info(); 
    
    p->set_name("Mark");
    p->set_type("mice");
    p->set_killing_spree(2);
    p->display_info();
    
    // Now that we have set actual values to our 
    // object dog, we can see the output again to
    // see them displayed on the console.
    dog->set_name("Mecho");
    dog->set_type("puppy");
    dog->set_killing_spree(0);
    dog->display_info(); 

    return 0;
}