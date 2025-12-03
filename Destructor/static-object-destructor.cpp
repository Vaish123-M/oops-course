#include <iostream>
using namespace std;

class Sample {
public:
    Sample() {
        cout << "Constructor called\n";
    }
    ~Sample() {
        cout << "Destructor called\n";
    }
};

int main() {

    static Sample obj;  
    // static object → stored in static memory (not stack)

    cout << "Inside main\n";

    // obj will NOT be destroyed here

    return 0;
}
// Destructor will be called AFTER main() ends
