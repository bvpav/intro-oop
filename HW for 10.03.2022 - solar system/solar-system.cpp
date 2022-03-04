#include<iostream>

//============================================================================
// Homework on basic classes Planet & SolarSystem
//============================================================================

class Planet{
    //TODO add fields for name, distanceToSun, diameter, weight, isAvailableForVisit
public:
    /**
     * @brief Construct a new Planet object
     * 
     * @param name 
     * @param distanceToSun 
     * @param diameter
     * @param weight 
     */
    Planet(string name, double distanceToSun, double diameter, double weight){}

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

    // Read about predefining operators
    // What would happen if you delete it
    // and try to copy an object with '='?
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
     * @brief Calculates seconds to the sun
     * 
     * @return double
     */
    double getSecondsToSun();
};

class SolarSystem {

    //Array of planets, planets count, capacity

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
     * Creating solar system with planetsCount as capacity 
     * and copying the Planet objects from planets
     * 
     * @param planets 
     * @param planetsCount 
     */
    SolarSystem(Planet* planets, size_t planetsCount){}

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
    SolarSystem& operator=(const SolarSystem& solarSystem){} //Write it if you want, it is almost the same as the copy constructor

    /**
     * @brief Get the planetsCount
     * 
     * @return size_t 
     */
    size_t getPlanetsCount()const{}

    /**
     * @brief Get a planet at the provided index. Validate the index
     * 
     * @param index 
     * @return const Planet& 
     */
    const Planet& at(size_t index)const{};

    /**
     * @brief  Adding a Planet to a SolarSystem. Check if a Planet with this name already exists in the solarSystem, if so return -1, else return 0.
     * 
     * @param planet 
     * @return int 
     */
    int add(const Planet& planet){}

    /**
     * @brief Remove a planet from the array. Return -1 if not found, else return 0 
     * 
     * @param name 
     * @return int 
     */
    int remove(string name){}

    /**
     * @brief Change the isAvailableForVisit field of the planet. 
     * A.k.a visit the planet. Validate if the planet is available
     * 
     * @param name 
     * @return int 
     */
    int visitPlanet(string name){}
};

int main(){
    //Create some more objects of type Planet, you
    //can use the code from your previous HW.
    //Write code to show that all the functionalites 
    //of the Solar System class are working.
    return 0;
}