//A deep copy creates a separate memory block for the new object.
//Even if the class has pointers, the data is duplicated, not shared.
//Each object has its own copy of data, completely independent.
//Advantage
//Changing one object does not affect the other.


#include <iostream>
using namespace std;

class Demo {
public:
    int *ptr;

    Demo(int x) {
        ptr = new int(x);
    }

    // Deep Copy Constructor
    Demo(const Demo &d) {
        // Allocates NEW memory for this object and copies the value
        ptr = new int(*d.ptr);   // ✔ new memory, safe
    }
};

int main() {
    Demo obj1(10);
    Demo obj2 = obj1;      // Deep copy called

    cout << *obj1.ptr << endl;   // 10
    cout << *obj2.ptr << endl;   // 10

    *obj2.ptr = 50;         // changes only obj2

    cout << *obj1.ptr << endl;   // ✔ still 10
    cout << *obj2.ptr << endl;   // 50

    return 0;
}
