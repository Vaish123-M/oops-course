#include <iostream>
using namespace std;

class Student {
public:
    int age;

    // Parameterized constructor
    Student(int a) {
        age = a;
    }

    // Copy constructor
    Student(const Student &s) {
        // Copying data of existing object 's' into new object
        age = s.age;
    }
};

// A function to show how copy constructor is called when passing by value
void display(Student temp) {   // ← copy constructor called here
    cout << "Inside display function, age = " << temp.age << endl;
}

Student createObj() {
    Student obj(25);
    return obj;   // ← copy constructor called when returning object
}

int main() {

    Student s1(20);    // Calls parameterized constructor

    Student s2 = s1;   // ← Copy constructor called (Case 1: creating new object using existing one)

    display(s1);       // ← Copy constructor called (Case 2: passing object by value)

    Student s3 = createObj();   // ← Copy constructor called (Case 3: returning object from a function)

    return 0;
}
