#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor Called\n";
    }

    ~Demo() {
        cout << "Destructor Called\n";
    }
};

int main() {
    Demo obj;   // Constructor runs

    // When main ends, destructor is called automatically
    return 0;
}
