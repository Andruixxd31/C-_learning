#include <iostream>
#include "Shape.h"
#include "Circle.h"

using namespace std;

void ShowArea(Shape &shape);

int main(int argc, char **argv)
{
    Shape square(10, 10);
    Circle circle(10);
    ShowArea(square);
    ShowArea(circle);
    return 0;
}

void ShowArea(Shape &shape)
{
    cout << "Area: " << shape.Area() << endl;
}
