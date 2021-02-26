#include "circle.h"
using namespace std;


Circle::Circle() //default constructor
{
    radius = 0.0f;
}
Circle::Circle(float myRadius) //constructor taking radius argument
{
    radius = myRadius;
}
Circle::Circle(const Circle& circle) //copy constructor
{
}
Circle& Circle::operator=(const Circle& circle) //assignment operator
{
    radius = circle.radius;
    return *this;
}
std::ostream& operator << (std::ostream& os, const Circle& c) //output stream operator
{
    os << c.radius;
    return os;
}
Circle operator+(const Circle& c1, const Circle& c2) //add operator
{
    float rad = c1.radius+c2.radius;
    Circle c(rad);
    return c;
}
float Circle::getRadius(){ //accessor
    return radius;
}
void Circle::setRadius(float rad) //mutator
{
    radius = rad;
}
        
float Circle::computeArea() //computes circle area
{
    float area = 3.14159*radius*radius;
    return area;
}
Circle::~Circle() //destructor
{
}
  


