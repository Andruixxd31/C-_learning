#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape
{ //inheriting from shape

public:
    Circle();
    Circle(double width);
    Circle(const Circle &orig);
    virtual ~Circle();
    double Area();

private:
};

#endif