#include<iostream>

//============================================================================
// Homework on basic class
//============================================================================

class Planet{
    //TODO add fields
public:
    Planet(const char *name, double distance_to_sun, double diameter, double weight);
    ~Planet();

    //TODO add getters and setters

    void print();
    double get_seconds_to_sun();
};

int main(){

    //Get all the parameters from the console
    //Make sure that the values are valid!
    //Then create an object of type Planet and test all the methods.

    return 0;
}