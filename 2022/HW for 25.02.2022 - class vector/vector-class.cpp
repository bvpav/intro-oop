#include<iostream>

using namespace std;

////////////////////////////////////////////////////////////////////////
// TASK:
// Implement as many methods as you can in the Vector class.
////////////////////////////////////////////////////////////////////////

class Vector {
    int* data;
    size_t size;
    size_t capacity;

    // Write your code here :)
public:
    /**
    * @brief Initializing the vector with the provided capacity
    * 
    * @param capacity 
    */
    void init(size_t capacity) {

    }

    /**
    * @brief Creates a new vector with the same elements as the vector calling the function
    *
    * @return Vector* the copied vector
    */  
    Vector* copy_vector() {
        // Edit/delete the return when you implement the function 
        return new Vector();
    }

    /**
    * @brief Retrieves the value of the vector at the provided index
    * 
    * @param index 
    * @return int 
    */
    int at(size_t index) {
        // Edit/delete the return when you implement the function
        return 0;
    }

    /**
    * @brief Inserts element at the back of the vector
    * 
    * @param element 
    * @return int 0 if successful, otherwise -1
    */
    int push_back(int element) {
        return -1;
    }

    /**
    * @brief Enlarge the vector with capacity * 2
    */
    void resize() {

    }

    /**
    * @brief Removes the last element of the vector 
    * @return the element you just removed if successful, otherwise -1
    */
    int remove_back() {
        return -1;
    }

    /**
    * @brief Deletes the allocated memory by the vector
    * 
    */
    void destroy() {
        
    }
};

// Driver code, do NOT edit this!
int main() {
    Vector* v = new Vector();
    
    v->init(2);
    
    cout << v->push_back(5) << endl;
    cout << v->push_back(10) << endl;
    
    Vector* v2 = v->copy_vector(); // Returns a new Vector object
                                   // with capacity 2, size 2 
                                   // and elements 5, 10
    
    v->destroy();
    v2->resize();
    
    cout << v2->push_back(15) << endl;
    cout << v2->at(1) << endl; //10
    cout << v2->remove_back() << endl; //15
    
    v2->destroy();
    
    return 0;
}