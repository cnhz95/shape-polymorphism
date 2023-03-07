#include "Rectangle.h"

Rectangle::Rectangle(std::string&& colour, double width, double height)
    : Shape(std::move(colour)), m_width(width), m_height(height) {}

double Rectangle::calculateArea() const {
    return m_width * m_height;
}

double Rectangle::getWidth() const {
    return m_width;
}

double Rectangle::getHeight() const {
    return m_height;
}