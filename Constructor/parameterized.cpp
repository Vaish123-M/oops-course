#include <iostream>
using namespace std;

class Student {
public:
    int age;

    Student(int a) {     // parameterized constructor
        age = a;
    }
};

int main() {
    Student s1(20);
    cout << s1.age;      // Output: 20
}
