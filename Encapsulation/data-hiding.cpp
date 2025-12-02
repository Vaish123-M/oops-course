//What happened here?
//marks is hidden using private.
//You cannot access it directly.
//You can only access it using public functions (setters/getters)

#include <iostream>
using namespace std;

class Student {
private:
    int marks;   // hidden data

public:
    void setMarks(int m) {   // controlled access
        if(m >= 0 && m <= 100)
            marks = m;
        else
            marks = 0;
    }

    int getMarks() {         // safe read
        return marks;
    }
};

int main() {
    Student s;
    // s.marks = 90;   // ❌ Not allowed: data is hidden (private)
    s.setMarks(95);    // ✔ allowed through public function
    cout << s.getMarks();
}
