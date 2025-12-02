#include <iostream>
using namespace std;

class Student {
public:
    int age;

    Student() {         // default constructor
        age = 18;
        cout << "Default Constructor Called\n";
    }
};

int main() {
    Student s;          // calls default constructor
    cout << s.age;
}
