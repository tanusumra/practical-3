#include <iostream>
using namespace std;

class Shape {
public:
    double height;
    double base;

    void display_shape(); 
};

void Shape::display_shape() {
    std::cout << "Height: " << height << " units" << std::endl;
    std::cout << "Base: " << base << " units" << std::endl;
}

int main() {
    Shape myShape;
    myShape.height = 5.0;
    myShape.base = 10.0;

    myShape.display_shape();

    return 0;
}
