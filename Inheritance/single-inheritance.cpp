#include<iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "This is class A\n";
    }
};

class B : public A {   // Single Inheritance
public:
    void displayB() {
        cout << "This is class B\n";
    }
};

int main() {
    B obj;
    obj.displayA();  // inherited
    obj.displayB();
}
// In this example, class B inherits from class A using single inheritance.