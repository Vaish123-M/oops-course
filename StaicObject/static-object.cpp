#include<iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called\n";
    }
    ~Demo() {
        cout << "Destructor called\n";
    }
};

void test() {
    static Demo obj; // static object
    cout << "Inside function\n";
}

int main() {
    test();   // function ends but destructor NOT called here
    test();   // same object reused
}
