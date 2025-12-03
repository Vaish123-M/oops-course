
#include<iostream>
using namespace std;

class Sample {
public:
    int *p;

    Sample(int x) {
        p = new int(x);   // dynamic memory allocated
        cout << "Constructor called\n";
    }

    ~Sample() {
        delete p;         // memory freed
        cout << "Memory released\n";
    }
};

int main() {
    Sample obj(10);   // object created

    cout << "Inside main function\n";

    return 0;         // as soon as main ends → destructor called
}
