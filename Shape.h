#ifndef SHAPES_SHAPE_H
#define SHAPES_SHAPE_H

#include <string>

// Abstract base class, cannot be instantiated
class Shape {
public:
    explicit Shape(std::string&& colour);
    virtual double calculateArea() const = 0; // Derived functions must override it, otherwise will become abstract classes themselves
    std::string getColour() const;

private:
    std::string m_colour;
};

#endif