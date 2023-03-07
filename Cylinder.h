#ifndef SHAPES_CYLINDER_H
#define SHAPES_CYLINDER_H

#include "Circle.h"

class Cylinder : public Circle {
public:
    Cylinder(std::string&& colour, double radius, double height);
    double calculateArea() const override;
    double getHeight() const;

private:
    double m_height;
};

#endif