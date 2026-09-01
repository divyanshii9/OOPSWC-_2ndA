
#include <iostream>
using namespace std;

class Marks {
private:
    int marks[5];

public:
    void input() {
        cout << "Enter marks: ";
        for (auto &x : marks) {
            cin >> x;
        }
    }

    void display() {
        for (auto x : marks) {
            cout << x << " ";
        }
        cout << endl;
    }

    friend int totalMarks(Marks m);
};

int totalMarks(Marks m) {
    int total = 0;

    for (auto x : m.marks) {
        total += x;
    }

    return total;
}

int main() {
    Marks m;

    m.input();

    cout << "Marks: ";
    m.display();

    cout << "Total Marks: " << totalMarks(m) << endl;

    return 0;
}
