#include <iostream>
using namespace std;

class MyClass {         
  public:             
    void myMethod();
};

void MyClass::myMethod() {
 for(int r = 0; r<12; r++){
 cout<<r<<endl;
 }
 }

int main() {
  MyClass myObj;
  myObj.myMethod();
  return 0;
}
