#include <iostream>
using namespace std;

//Set up the Rectangle class
class Rectangle{
    public:
        void setValues(int a, int b);
        int getArea() const {return length * width;};
        int getPerimeter() const {return 2 * length + 2 * width;};
    protected:
        int length;
        int width;
};
//setValues() function definition
void Rectangle::setValues(int a, int b){
    length = a;
    width = b;
}

//Derived class
class Square : public Rectangle {
    public:
        void setSides(int side){
            length = side;
            width = side;
        }
};