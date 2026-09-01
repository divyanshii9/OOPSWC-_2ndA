#include <iostream>
using namespace std;

class Employee {
private:
    int employeeID;
    string name;
    float salary;

public:
    Employee(int id, string n, float s) {
        employeeID = id;
        name = n;
        salary = s;
    }

    void input();
    void display();
};

void Employee::input() {
    cout << "Employee ID: " << employeeID << endl;
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
}

void Employee::display() {
    cout << "\nEmployee Details" << endl;
    cout << "Employee ID: " << employeeID << endl;
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
}

int main() {
    Employee e(101, "Rahul", 25000);

    e.input();
    e.display();

    return 0;
}
