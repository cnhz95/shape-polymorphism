#include "Circle.h"
#include "Cylinder.h"
#include "Parallelepiped.h"
#include "Rectangle.h"
#include "Rounded_rectangle.h"
#include "Shape.h"
#include <iostream>
#include <vector>

// Calls the derived version of the functions instead of the base version
// Provides polymorphic area calculation of the total area of all shapes in the container
void getData(std::vector<const Shape*>& shapes) {
    double total_area = 0.0;
    for (auto shape : shapes) {
        total_area += shape->calculateArea();
        std::cout << "Area: " << shape->calculateArea() << "\tColour: " << shape->getColour() << '\n';
    }
    std::cout << "\nTotal area of all shapes: " << total_area << '\n';
}

int main() {
    Circle c("Blue", 5.0);
    Rectangle r("Purple", 4.0, 3.2);
    Parallelepiped p("Grey", 2.0, 5.4, 3.8);
    Rounded_rectangle rr("Green", 3.7, 2.6, 2.0);
    Cylinder cyl("Orange", 3.3, 4.8);

    std::vector<const Shape*> shapes{ &c, &r, &p, &rr, &cyl }; // Keeps pointers to the derived class objects

    getData(shapes);

    return 0;
}