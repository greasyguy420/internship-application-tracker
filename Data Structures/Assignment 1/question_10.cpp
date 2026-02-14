#include <iostream>
using namespace std;
//Addition function with integer functionality
int add(int x, int y){return x + y;}
//Addition function with double functionality
double add(double x, double y){return x + y;}

int main(){
    //Initialize variables
    int num1 = 3;
    int num2 = 4;
    double num3 = 3.4;
    double num4 = 2.1;
    //Print sums
    cout << add(num1, num2) << endl;
    cout << add(num3, num4) << endl;
}