#include <iostream>
using namespace std;

//Set up the Rectangle class
class Rectangle{
    public:
        void setValues(int a, int b);
        int getArea() const {return length * width;};
        int getPerimeter() const {return 2 * length + 2 * width;};
    private:
        int length;
        int width;
};
//setValues() function definition
void Rectangle::setValues(int a, int b){
    length = a;
    width = b;
}

int main(){
    //Initialize the square object of the Rectangle class and set values for the length and width integers
    Rectangle square;
    square.setValues(3, 3);

    //Prints the Area and Perimeter from the length and width
    cout << "Area: " << square.getArea() << endl;
    cout << "Perimeter: " << square.getPerimeter() << endl;

    return 0;
}