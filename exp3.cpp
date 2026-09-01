#include <iostream>
using namespace std;

void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    cout << "After Call by Value: " << a << " " << b << endl;
}

void swapReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;

    cout << "After Call by Reference: " << a << " " << b << endl;
}

int main() {
    int x = 10, y = 20;

    cout << "Before: " << x << " " << y << endl;

    swapValue(x, y);
    cout << "Original values: " << x << " " << y << endl;

    swapReference(x, y);
    cout << "Original values: " << x << " " << y << endl;

    return 0;
}