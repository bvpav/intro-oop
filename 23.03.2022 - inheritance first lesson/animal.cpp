#include <iostream>

using namespace std;

class Animal {
    string name;

protected:
    string type;

public:
    Animal() {
        type = "animal";
    }

    Animal(string name) {
        this->name = name;
    }

    Animal(string name, string type) {
        this->name = name;
        this->type = type;
    }

    void eat() {
        cout << "I am eating" << endl;
    }

    void print() {
        cout << "Print in animal" << endl;
    }

};

class Snake : public Animal {
public:
    Snake(string name, string type) : Animal(name, type){}
    Snake(string name) : Animal(name) {}
    // Not a real setter


    void set_type() {
        type = "snake";
    }

    // Real setter
    void setType(string type) {
        this->type = type;
    }

    void print() {
        cout << type << endl; 
    }

    // Overloading
    void print(int argument) {

    }
};

class Mamba : public Snake {
public:
    Mamba(string name, string type) : Snake(name, type) {}
};

int main() {
    Animal* a =  new Animal("Mimi", "zmiiche");
    Snake *s = new Snake("Pesho","zmiiche");
    Mamba* m = new Mamba("Aleks", "mamba");
    //s.set_type();
    s->print();
    s->eat();
    
    m->print();
    //m.eat();
    return 0;
}