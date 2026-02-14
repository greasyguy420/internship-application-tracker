#include <iostream>
using namespace std;

int main(){
    int numerator, denominator;
    cout << "Input numerator: ";
    cin >> numerator;
    cout << "Input denominator: ";
    cin >> denominator;
    
    try{
        if(denominator != 0)
            cout << "Quotient: " << numerator / denominator << endl;
        else
            throw 505;
    }
    catch(...){
        cout << "You can't divide by zero!";
    }
    return 0;
}