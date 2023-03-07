#ifndef SHAPES_RECTANGLE_H
#define SHAPES_RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle(std::string&& colour, double width, double height);
    double calculateArea() const override;
    double getWidth() const;
    double getHeight() const;

private:
    double m_width;
    double m_height;
};

#endif