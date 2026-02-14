#include <iostream>

int main(){
    double mystery = 8.0;
    int unkown = 40;
    int bizarre = 12;

    int process = unkown >> 3;
    std::cout << process << std::endl; //Number after right shift by 3

    mystery /= (unkown >> 3 ) & (bizarre);
    std::cout << mystery << std::endl;
}