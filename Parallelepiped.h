#ifndef SHAPES_PARALLELEPIPED_H
#define SHAPES_PARALLELEPIPED_H

#include "Rectangle.h"

class Parallelepiped : public Rectangle {
public:
    Parallelepiped(std::string&& colour, double width, double height, double depth);
    double calculateArea() const override;
    double getDepth() const;

private:
    double m_depth;
};

#endif