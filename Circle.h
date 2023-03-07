#ifndef SHAPES_CIRCLE_H
#define SHAPES_CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
public:
    Circle(std::string&& colour, double radius);
    double calculateArea() const override;
    double getRadius() const;

protected:
    const double PI = 3.14159265359;

private:
    double m_radius;
};

#endif