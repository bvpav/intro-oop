#include <iostream>

// Class, public, private
using namespace std;

class Point {
  int x;
  int y;
  int z;
public:
// Default constructor -has no arguments, does nothing
//  Point() {}

// Non-default constructor!
  Point() {
    this->x = 10;
    this->y = 11;
    this->z = 12;
  }

  Point(int x, int y) {
    this->x = x;
    this->y = y;
    this->z = x + y;
  }

  void display() {
    cout << "X: " << this->x
      << ", Y: " << this->y << ", Z: " << this->z << endl;
  }
};

int main() {
  // Uses default constructor
  Point p2;
  
  Point p(0, 1);
  p.display();
  Point* p1 = 
  new Point(2, 2); // Heap variable - dinamichna pamet

  int* array = new int[10]; 
  // int** new_array = 
  // new *int[2];
  
  Point** points = 
  new Point*[2]{new Point(0,0), new Point(1,1)};

  // Point points2[2][2] =
  // new Point[2][2]; -->
  // does not work!
  
  for (int i = 0; i< 2; i++) {
    points[i]->display();
  }
  
  //(*p1).display();
  p1->display();
  
  p2.display();
  
  int* a = new int{5}; // Stack variable

  delete a; // how to delete a pointer to a variable
  delete [] array; // deletes an array
  delete [] *points;
  //delete [] points;
}