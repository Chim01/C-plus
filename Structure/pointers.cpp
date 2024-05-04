#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";  // A string variable
  string* ptr = &food;  // A pointer variable that stores the address of food

  // Output the value of food
  cout << food << "\n";

  // Output the memory address of food
  cout << &food << "\n";

  // Output the memory address of food with the pointer
  cout << ptr << "\n";

    string food = "Pizza";  // Variable declaration
    string* ptr = &food;    // Pointer declaration

//DEREFRENCING
    // Reference: Output the memory address of food with the pointer
    cout << ptr << "\n";

    // Dereference: Output the value of food with the pointer
    cout << *ptr << "\n";

//MODIFY POINTER
     string food = "Pizza";
    string* ptr = &food;

    // Output the value of food
    cout << food << "\n";

    // Output the memory address of food
    cout << &food << "\n";

    // Access the memory address of food and output its value
    cout << *ptr << "\n";
    
    // Change the value of the pointer
    *ptr = "Hamburger";
    
    // Output the new value of the pointer
    cout << *ptr << "\n";
    
    // Output the new value of the food variable
    cout << food << "\n";
  return 0;
}
