#include<iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "From A\n";
    }
};

class B {
public:
    void showB() {
        cout << "From B\n";
    }
};

class C : public A, public B {  // Multiple Inheritance
public:
    void showC() {
        cout << "From C\n";
    }
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();
}
// In this example, class C inherits from both class A and class B, demonstrating multiple inheritance.