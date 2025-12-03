#include<iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Base Class A\n";
    }
};

class B : public A {
public:
    void showB() {
        cout << "Derived Class B\n";
    }
};

class C : public A {
public:
    void showC() {
        cout << "Derived Class C\n";
    }
};

int main() {
    B obj1;
    C obj2;

    obj1.showA();
    obj1.showB();

    obj2.showA();
    obj2.showC();
}
// In this example, both class B and class C inherit from class A, demonstrating hierarchical inheritance.