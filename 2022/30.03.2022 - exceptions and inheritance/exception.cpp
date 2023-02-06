#include <iostream>
#include <string>
using namespace std;

class Exception {
    string message;
public:
    Exception(string message) {
        this->message = message;
    }

    Exception() {}

    void displayMessage() {
        cout << this->message << endl;
    }

    ~Exception() {
    }
};

class NegativeNumberException : public Exception {
public: 
    NegativeNumberException(string message) : Exception(message) {
    }
};

int division(int a, int b) {
    if (b == 0) {
        throw Exception("Do not divide by zero!");
    }

    if (b < 0) {
        throw NegativeNumberException("Message");
    }

    return a / b;
}

int calculate(int a, int b) {
    return division(a,b);
}

//throw new Exception("Do not divide by zero!"); gives error, look up why
int main() {
    try {
        calculate(10, 0);
    } catch (Exception e) {
        e.displayMessage();
    }
    return 0;
}