#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string &meal = food;
  string snack = "Pizza";

  cout << food << "\n";
  cout << meal << "\n";
  cout << &snack;
  
  return 0;
}
