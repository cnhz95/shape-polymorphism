#ifndef SHAPES_ROUNDED_RECTANGLE_H
#define SHAPES_ROUNDED_RECTANGLE_H

#include "Rectangle.h"
#include <string>

class Rounded_rectangle : public Rectangle {
public:
    Rounded_rectangle(std::string&& colour, double width, double height, double corner_radius );
    double calculateArea() const override;
    double getCornerRadius() const;

private:
    const double PI = 3.14159265359;
    double m_corner_radius;
};

#endif