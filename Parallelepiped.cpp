#include "Parallelepiped.h"

Parallelepiped::Parallelepiped(std::string&& colour, double width, double height, double depth)
    : Rectangle(std::move(colour), width, height), m_depth(depth) {}

double Parallelepiped::calculateArea() const {
    return 2 * Rectangle::calculateArea() + 2 * Rectangle::getHeight() * m_depth + 2 * Rectangle::getWidth() * m_depth;
}

double Parallelepiped::getDepth() const {
    return m_depth;
}