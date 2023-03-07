#include "Shape.h"

Shape::Shape(std::string&& colour) : m_colour(std::move(colour)) {}

std::string Shape::getColour() const {
    return m_colour;
}