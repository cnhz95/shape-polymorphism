#include "Circle.h"

Circle::Circle(std::string&& colour, double radius)
    : Shape(std::move(colour)), m_radius(radius) {}

double Circle::calculateArea() const {
    return PI * m_radius * m_radius;
}

double Circle::getRadius() const {
    return m_radius;
}