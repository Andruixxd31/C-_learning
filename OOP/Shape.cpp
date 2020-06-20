//implementation file
#include "Shape.h"

Shape::Shape(double length)
{
    this->height = height; //-> point operator to acces object's fields
    this->width = width;
}

Shape::Shape(double height, double width)
{
    this->height = height; //-> point operator to acces object's fields
    this->width = width;
}

Shape::~Shape() = default;

void Shape::SetHeight(double height) { this->height = height; }

double Shape::GetHeight() { return this->height; }

void Shape::SetWidth(double height) { this->width = width; }

double Shape::GetWidth() { return this->width; }

int Shape::GetNumOfShapes() { return numOfShapes; }