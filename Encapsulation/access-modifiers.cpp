#include <iostream>
using namespace std;

class Employee {
private:
    int salary;       // hidden from outside world

protected:
    int id;           // accessible in derived class

public:
    string name;      // accessible anywhere

    void setSalary(int s) {
        salary = s;
    }

    int getSalary() {
        return salary;
    }
};

int main() {
    Employee e;
    e.name = "Vaishnavi";   // ✔ public
    // e.id = 10;           // ❌ protected (not allowed)
    // e.salary = 50000;    // ❌ private (not allowed)

    e.setSalary(50000);
    cout << e.getSalary();
}
