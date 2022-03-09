#include <iostream>

using namespace std;

class Test {
    int* array;
    int size;
public:
    Test() {
        cout << "In default constructor"<< endl;
    }

    Test(int size) {
        this->size = size;
        this->array = new int[size];
        cout << "In custom constructor" << endl;
    }

    Test(const Test& test) {
        this->size = test.size;
        this->array = new int[this->size];
        for (int i = 0; i < this->size; i++) {
            this->array[i] = test.array[i];
        }
        
        cout << "In copy constructor" << endl;
    }

    
    ~Test() {
        cout << "In desctructor" << endl;
    }

    int getSize() {
        return this->size;
    }
};

int main() {
    // Test t1; & Test* t1 = new Test(); 
    // will both call the default constructor
    Test* t = new Test();
    cout << "t memory block: " << &t << endl;
   
    Test test(1);
    cout << "test memory block: "<< &test << endl;
    
    Test test2(2);
    cout << "test2 memory block: "<< &test2 << endl;
    
    // Copy constructor
    Test test3 = test; 
    cout << "test3 memory block: "<< &test3 << endl;


    //Override = operator
    test = test2;
    
    cout << "test memory block: "<< &test << endl;
    cout << "test2 memory block: "<< &test2 << endl;
    cout << "test3 memory block: "<< &test3 << endl;

    cout << test.getSize() << endl;
    cout << test2.getSize() << endl; 

    //Calls the destructor of every object
    //at the end of the programme
    return 0;
 }