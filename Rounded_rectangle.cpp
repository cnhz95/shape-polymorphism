#include "Rounded_rectangle.h"

Rounded_rectangle::Rounded_rectangle(std::string&& colour, double width, double height, double corner_radius)
    : Rectangle(std::move(colour), width, height), m_corner_radius(corner_radius) {}

double Rounded_rectangle::calculateArea() const {
    return Rectangle::calculateArea() - (4 * m_corner_radius * m_corner_radius - PI * m_corner_radius * m_corner_radius);
}

double Rounded_rectangle::getCornerRadius() const {
    return m_corner_radius;
}