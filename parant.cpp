#include <iostream>
 
using namespace std;
 
// Base class
class Parent {
public:
    int x;
};
 
// Subclass inheriting from
// base class (Parent).
class Child : public Parent {
public:
    int y;
};
 
int main()
{
    Child obj1;
 
    // An object of class Child has
    // all data members and member
    // functions of class Parent.
    obj1.y = 8;
    obj1.x = 91;
    cout << obj1.y << endl;
    cout << obj1.x << endl;
 
    return 0;
}