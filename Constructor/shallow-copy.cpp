//Definition:- A shallow copy copies the values of data members, but if the class has pointers, it copies only the address, not the actual data.
//Both objects point to the same memory location.
//Problem
//If one object changes the value at that pointer, the other object also changes.

#include <iostream>
using namespace std;

class Demo {
public:
    int *ptr;

    Demo(int x) {
        ptr = new int(x);
    }

    // Shallow copy constructor
    Demo(const Demo &d) {
        // Copies only the pointer address, NOT the actual data
        ptr = d.ptr;   // ❌ same memory shared
    }
};

int main() {
    Demo obj1(10);
    Demo obj2 = obj1;     // Shallow copy called

    cout << *obj1.ptr << endl;   // 10
    cout << *obj2.ptr << endl;   // 10

    *obj2.ptr = 50;       // changes both

    cout << *obj1.ptr << endl;   // 50 ❌ changed
    cout << *obj2.ptr << endl;   // 50

    return 0;
}
