#include <iostream>
using namespace std;

int main(){
    //Gets a number from the user
    int num;
    cout << "Enter a number: ";
    cin >> num;

    //This is an if else chain to determine if the entered number is positive, negative, or zero
    if(num < 0) cout << "Your number is negative!";
    else if(num > 0) cout << "Your number is positive!";
    else cout << "Your number is zero!";

    return 0;
}