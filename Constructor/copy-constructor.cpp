#include <iostream>
using namespace std;

class Student {
public:
    int age;

    Student(int a) {     // parameterized
        age = a;
    }

    Student(const Student &s) {   // copy constructor
        age = s.age;
    }
};

int main() {
    Student s1(20);
    Student s2 = s1;    // calls copy constructor

    cout << s2.age;     // Output: 20
}
