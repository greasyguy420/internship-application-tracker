#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct Human{
    string name;
    string gender;
    int age;
    string city;
};

int main(){
    Human person1;
    person1.name = "Josh";
    person1.gender = "Male";
    person1.age = 19;
    person1.city = "Tampa";

    cout << "Name: " << person1.name << endl;
    cout << "Gender: " << person1.gender << endl;
    cout << "Age: " << person1.age << endl;
    cout << "You are from: " << person1.city << endl;

    return 0;
}
