// Name: Haiqa Kamran   
// Date: February 25th, 2021

#pragma once
#include <iostream>

class Circle
{
    public:
        Circle(); //default constructor
        Circle(float radius);
        Circle(const Circle& circle); //copy constructor

        Circle& operator=(const Circle& circle); //assignment operator

        friend std::ostream& operator << (std::ostream& os, const Circle& c); //output stream
        friend Circle operator+(const Circle& c1, const Circle& c2); //add operator 


        virtual float getRadius();
        void setRadius(float rad);
        float computeArea();
        ~Circle(); //destructor
    private:
        float radius = 0.0f;
};

