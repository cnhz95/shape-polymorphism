#include "Cylinder.h"

Cylinder::Cylinder(std::string&& colour, double radius, double height)
    : Circle(std::move(colour), radius), m_height(height) {}

double Cylinder::calculateArea() const {
    return 2 * Circle::calculateArea() + 2 * Circle::PI * Circle::getRadius() * m_height;
}

double Cylinder::getHeight() const {
    return m_height;
}