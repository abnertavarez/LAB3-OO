/*
 * Course: COEN 2220 - Programming 2
 * Name: [Your Name]
 * Lab: Lab 3 - Object-Oriented Programming, Part 1
 * Description: Converting a struct to a class with encapsulation
 * Due date: [Date]
 */

#include <iostream>
using namespace std;

struct RectangleStruct
{
    double width;
    double height;
};

class RectangleClass
{
private:
    double width;
    double height;

public:
    void setWidth(double w) {
     if (w > 0)
            width = w;
    }
    void setHeight(double h)
    {
        if (h > 0)
            height = h;
    }

    double getWidth() const
    {
        return width;
    }

    double getHeight() const
    {
        return height;
    }

    double getArea() const
    {
        return width * height;
    }
};

int main() {
    RectangleStruct r;
    r.width = -5.0;
    r.height = 3.0;
    cout << "Struct area (con ancho invalido): " << (r.width * r.height) << endl;

    RectangleClass r2;
    r2.setWidth(5.0);
    r2.setHeight(3.0);

    cout << "Area antes: " << r2.getArea() << endl;

    r2.setWidth(-5.0);

    cout << "Area despues: " << r2.getArea() << endl;

    return 0;
}
