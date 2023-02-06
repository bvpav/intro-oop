#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main () {
  ofstream myfile; // Default constuctor
  myfile.open ("example.txt");

  myfile << "Writing this to a file.\n" << endl;
  myfile.close();

  ofstream file("example1.txt", ios::out | ios::app); // Custom constructor
  
  string message;
  cin >> message;
  file << message;

  file.close();

  ifstream file1("example1.txt", ios::in);
  string m1;
  file1 >> m1;
  cout << m1 << endl;

  file1.close();

  stringstream ss; //Default constructor

  ss << 100 << "aa nestho" << ' ' << " 200";

 // 100aa nestho    200
  string foo, bar;
  string num;
  ss >> foo >> bar >> num;

  cout << "foo: " << foo << '\n'; // string 100aa
  cout << "bar: " << bar << '\n'; // string neshto
  cout << "num: " << num << endl; 

  cin.ignore();
  stringstream ss1;
  string mess;
  getline(cin, mess);
  ss1 << mess;

  cout << mess << endl;
  return 0;
}