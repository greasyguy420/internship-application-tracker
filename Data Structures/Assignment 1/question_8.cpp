#include <iostream>
using namespace std;

int main(){
    //The user enters a number that represents a day of the week
    int day;
    cout << "Enter a day (1 = Monday, 2 = Tuesday, ..., 7 = Sunday): ";
    cin >> day;

    //This switch case statement then takes the user's number and displays the day.
    switch(day){
        case 1:
        cout << "You entered Monday" << endl;
        break;
        case 2:
        cout << "You entered Tuesday" << endl;
        break;
        case 3:
        cout << "You entered Wednesday" << endl;
        break;
        case 4:
        cout << "You entered Thursday" << endl;
        break;
        case 5:
        cout << "You entered Friday" << endl;
        break;
        case 6:
        cout << "You entered Saturday" << endl;
        break;
        case 7:
        cout << "You entered Sunday" << endl;
        break;
    }
    return 0;
}