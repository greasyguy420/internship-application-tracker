#include <iostream>

using namespace std;

int main(){
    char x, y;
    int number;
    string str;
    cout << "Enter a string: " << endl;
    getline(cin, str);

    cout << "Enter the old character: " << endl;
    cin >> x;

    cout << "Enter the new character: " << endl;
    cin >> y;

    string::size_type i;
    for(i = 0; i< str.length(); i++)
        if(str[i] == x)
            str[i] = y;

    cout << str << endl;
    return 0;
}