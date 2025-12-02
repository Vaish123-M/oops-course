//Left side age → data member
//Right side age → constructor parameter
//this->age tells compiler: use the current object's age

#include <iostream>
using namespace std;

class Student {
private:
    int age;

public:
    Student(int age) {         // parameter & data member have same name
        this->age = age;       // using this pointer
    }

    void show() {
        cout << "Age = " << this->age;
    }
};

int main() {
    Student s1(20);   // constructor called
    s1.show();
}
