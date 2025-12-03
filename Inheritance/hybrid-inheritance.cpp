#include<iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A\n";
    }
};

// Virtual Inheritance
class B : virtual public A {
public:
    void showB() {
        cout << "Class B\n";
    }
};

class C : virtual public A {
public:
    void showC() {
        cout << "Class C\n";
    }
};

class D : public B, public C {
public:
    void showD() {
        cout << "Class D\n";
    }
};

int main() {
    D obj;
    obj.showA();  // Now NOT ambiguous
    obj.showB();
    obj.showC();
    obj.showD();
}
// In this example, class D inherits from both class B and class C, which in turn inherit from class A using virtual inheritance. This prevents ambiguity when accessing members of class A.