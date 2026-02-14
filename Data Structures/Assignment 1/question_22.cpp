#include <iostream>
using namespace std;

void printNum(const double x){
    cout << "Value: " << x << endl;
}

int main(){
    //Initialize PI
    const double PI = 3.1415926535;
    //Prints PI with cout
    cout << "Constant PI = " << PI << endl;
    //Prints PI with function
    printNum(PI);

    return 0;
}