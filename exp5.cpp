
#include <iostream>
using namespace std;

class Product {
private:
    string name;
    float price;

public:
    Product(string n, float p) {
        name = n;
        price = p;
    }

    Product higherPrice(Product p1, Product p2) {
        if (p1.price > p2.price)
            return p1;
        else
            return p2;
    }

    void display() {
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Product p1("Laptop", 50000);
    Product p2("Mobile", 30000);

    Product p3 = p1.higherPrice(p1, p2);

    cout << "Product with Higher Price:" << endl;
    p3.display();

    return 0;
}

