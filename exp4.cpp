
#include <iostream>
using namespace std;

class Calculate {
private:
    int a, b;

public:
    Calculate(int x, int y) {
        a = x;
        b = y;
    }

    int area(int side) {
        return side * side;
    }

    int area() {
        return a * b;
    }

    float simpleInterest(float p, float t, float r = 5) {
        return (p * t * r) / 100;
    }
};

int main() {
    Calculate c(10, 6);

    cout << "Area of Square: " << c.area(5) << endl;
    cout << "Area of Rectangle: " << c.area() << endl;

    cout << "Simple Interest: " << c.simpleInterest(10000, 2) << endl;
    cout << "Simple Interest with Rate: " << c.simpleInterest(10000, 2, 8) << endl;

    return 0;
}
