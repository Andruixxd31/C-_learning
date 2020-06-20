#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
protected:
    double height;
    double width;

public:
    static int numOfShapes;
    Shape(double length);
    Shape(double height, double width);
    Shape(); //constructor

    virtual ~Shape(); //deconstructor, when an object is deleted or no longer used
    void SetHeight(double height);
    double GetHeight();
    void SetWidth(double height);
    double GetWidth();
    static int GetNumOfShapes(); //to access the static variable
    virtual double Area();       //virtual will allow to overwrite the method for each object
};

#endif