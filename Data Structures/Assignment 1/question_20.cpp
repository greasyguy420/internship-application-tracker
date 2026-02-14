#include <iostream>
using namespace std;

int main(){
    int a = 6;
    //The integer pointer points to the memory of a
    int *p = &a;

    cout << *p << endl;

    return 0;
}