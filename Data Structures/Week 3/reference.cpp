#include <iostream>
#include <string>
using namespace std;

int main() {
    string author = "Samuel Clemens";
    string& penName = author; // penName is an alias for author
    penName = "Mark Twain"; // modifies author through the reference
    cout << author << endl; // outputs: Mark Twain
    return 0;
}