#include <iostream>
using namespace std;

void swapInts(int & a, int & b); //Function declartion

int main(){
    //Initialize integers
    int num1 = 2;
    int num2 = 8;
    //Print integers
    cout << "Number 1: " << num1 << " Number 2: " << num2 << endl; 
    //Swap integers
    swapInts(num1, num2);
    //Print integers again
    cout << "Number 1: " << num1 << " Number 2: " << num2 << endl; 

    return 0;
}
//This defines a function that swaps to integers.
void swapInts(int & a, int & b){
    int temp = b;
    b = a;
    a = temp;
}