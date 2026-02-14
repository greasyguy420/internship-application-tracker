#include <iostream>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;

    void displayInfo(){
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main(){
    Car car1;
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;

    Car car2;
    car2.brand = "Honda";
    car2.model = "Civic";
    car2.year = 2019;

    car1.displayInfo();
    car2.displayInfo();

    return 0;
}