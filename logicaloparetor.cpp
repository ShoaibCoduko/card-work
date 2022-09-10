// C++ program demonstrating && operator truth table

#include <iostream>
using namespace std;

int main() 
{
    int a = 23;
    int b = 6;
  
    // false && false = false
    cout << ((a == 0) && (a > b)) << endl;
  
    // false && true = false
    cout << ((a == 0) && (a < b)) << endl;

    // true && false = false
    cout << ((a == 5) && (a > b)) << endl;

    // true && true = true
    cout << ((a == 5) && (a < b)) << endl;

    return 0;
}