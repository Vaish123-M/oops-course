#include<iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "Class A\n";
    }
};

class B : public A {
public:
    void displayB() {
        cout << "Class B\n";
    }
};

class C : public B {   // Multilevel
public:
    void displayC() {
        cout << "Class C\n";
    }
};

int main() {
    C obj;
    obj.displayA();
    obj.displayB();
    obj.displayC();
}
// In this example, class C inherits from class B, which in turn inherits from class A, demonstrating multilevel inheritance.