#include <iostream>
using namespace std;
enum Day {SUN, MON, TUE, WED, THU, FRI, SAT};

int main(){
    Day today = WED;
    if(today == SUN)
        cout << "Sunday";
    else if(today == MON)
        cout << "Monday";
    else if(today == TUE)
        cout << "Tuesday";
    else if(today == WED)
        cout << "Wednesday";
    else if(today == THU)
        cout << "Thursday";
    else if(today == FRI)
        cout << "Friday";
    else if(today == SAT)
        cout << "Saturday";

/*    switch(today){
        case SUN:
            cout << "Today is Sunday.";
            break;
        case MON:
            cout << "Today is Monday.";
            break;
        case TUE:
            cout << "Today is Tuesday.";
            break;
        case WED:
            cout << "Today is Wednesday.";
            break;
        case THU:
            cout << "Today is Thursday.";
            break;
        case FRI:
            cout << "Today is Friday.";
            break;
        case SAT:
            cout << "Today is Saturday.";
            break;
        default:
            cout << "Invalid day.";
    }
*/
    cout << endl;
    return 0;
}