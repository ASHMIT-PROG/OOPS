#include <iostream>
using namespace std;

class Shape {
protected:
    int dim1, dim2;

public:
    void setDimensions(int a, int b) {
        dim1 = a;
        dim2 = b;
    }

    virtual void area() = 0;  // pure virtual function
};

class Rectangle : public Shape {
public:
    void area() override {
        cout << "Rectangle Area: " << dim1 * dim2 << endl;
    }
};

class Triangle : public Shape {
public:
    void area() override {
        cout << "Triangle Area: " << 0.5 * dim1 * dim2 << endl;
    }
};

int main() {
    Rectangle r;
    Triangle t;

    r.setDimensions(10, 5);
    t.setDimensions(10, 5);

    r.area();  // Output: Rectangle Area: 50
    t.area();  // Output: Triangle Area: 25

    return 0;
}
