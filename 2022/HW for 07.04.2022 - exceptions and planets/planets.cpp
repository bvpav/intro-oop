#include<iostream>

//============================================================================
// Homework on basic classes Planet & SolarSystem
//============================================================================

class Planet{
    //TODO add fields for name, distanceToSun, diameter, weight, isAvailableForVisit
    //By default the isAvailableForVisit field should be set to 1.
public:
    /**
     * @brief Construct a new Planet object
     * 
     * @param name 
     * @param distanceToSun 
     * @param diameter
     * @param weight 
     * @param isAvailableForVisit
     */
    Planet(string name, double distanceToSun, double diameter, double weight, bool isAvailableForVisit){}

    /**
     * @brief Copy constructor for a new Planet object
     * 
     * @param planet 
     */
    Planet(const Planet& planet){}

    /**
     * @brief Destroy the Planet object
     * 
     */
    ~Planet(){}

    // Rewrite the code to throw an exception
    // saying self-assignment is not allowed
    // if this == &planet
    Planet& operator=(const Planet& planet){
        if (this != &planet){
            this->name = planet.name;
            this->distanceToSun = planet.distanceToSun;
            this->diameter = planet.diameter;
            this->weight = planet.weight;
        }
        return *this;
    }

    //TODO add getters and setters for ALL fields 

    /**
     * @brief Display contents of Planet object, use this
     * 
     */
    void print();

    /**
     * @brief Calculates seconds to the Sun
     * 
     * @return double
     */
    double getSecondsToSun();
};

class SolarSystem {

    //Array of planets, planets count, capacity, name

    /**
     * @brief Resizing the array with double capacity. 
     * The resize method is private! Why?
     * 
     */
    void resize(){}
public:
    /**
     * @brief Construct a new SolarSystem object. 
     * Creating empty solar system with the planetsCount as capacity
     * 
     * @param planetsCount 
     */
    SolarSystem(size_t planetsCount){}

    /**
     * @brief Construct a new SolarSystem object. 
     * Creating solar system with name, planetsCount as capacity 
     * and copying the Planet objects from planets
     * 
     * @param planets 
     * @param planetsCount 
     */
    SolarSystem(Planet* planets, size_t planetsCount, string name){}

    /**
     * @brief Construct a new SolarSystem object. Copy constructor
     * 
     * @param other 
     */
    SolarSystem(const SolarSystem& other){}

    /**
     * @brief Predefine the '=' operator
     * 
     * @param solarSystem 
     * @return SolarSystem& 
     */
    SolarSystem& operator=(const SolarSystem& solarSystem){} 

    /**
     * @brief Get the planetsCount
     * 
     * @return size_t 
     */
    size_t getPlanetsCount()const{}

    /**
     * @brief Get a planet at the provided index.
     * Throw exception if the index is invalid.
     * 
     * @param index 
     * @return const Planet& 
     */
    const Planet& at(int index)const{};

    /**
     * @brief  Adding a Planet to a SolarSystem. 
     * If the planet you are trying to add exists - throw an exception.
     * Otherwise, return 0.
     * 
     * @param planet 
     * @return int 
     */
    int add(const Planet& planet){}

    /**
     * @brief Remove a planet from the array. 
     * If the planet can't be found - throw an exception.
     * Otherwise return 0
     * 
     * @param name 
     * @return int 
     */
    int remove(string name){}

    /**
     * @brief Change the isAvailableForVisit field of the planet and make it not available for visits. 
     * A.k.a visit the planet. 
     * Throw exception if you can't visit the planet.
     * Otherwise, return 1. 
     * 
     * @param name 
     * @return int 
     */
    int visitPlanet(string name){}
};

int main(){
    // Implement ALL the methods!!!
    // Create a dynamic menu to show that all the functionalities are working.
    // You should expect input until the user hits 'q'.
    // Your menu has to have the following options printed before
    // selecting a choice every time:
    // 1. Create solar system (Note: create it without planets)
    // 2. Add planets to the solar system
    // 3. Remove planets from the sollar system
    // 4. Visit a planet
    // Press 'q' if you want to exist or choose an option:
    return 0;
}