#include <iostream>
#include <string>
using namespace std;

void print(string a = "Hi!"){
    cout << a << endl;
}

int main(){
    //Print using default arguments
    print();
    //Print using given arguments
    print("This is a test");
    return 0;
}