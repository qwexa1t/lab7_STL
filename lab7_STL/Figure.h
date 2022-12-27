#pragma once

class Figure
{
public:
    virtual void set() = 0; //прототипы методов
    virtual void print() = 0;
    virtual float area() = 0;
};

