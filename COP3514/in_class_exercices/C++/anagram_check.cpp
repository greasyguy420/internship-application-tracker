#include <iostream>
#include <string>
#define N 26
using namespace std;

int main(){
    int count[N] = {0};
    string s1, s2;

    cout << "Enter a string: " << endl;
    cin >> s1;

    cout << "Enter a second string: " << endl;
    cin >> s2;

    string::size_type i;

    for(i = 0;i < s1.length();i++)
        count[s1[i] - 'a']++;

    for(i = 0;i < s2.length();i++)
        count[s2[i] - 'a']--;

    for(i = 0;i < N;i++){
        cout << count[i] << ' ';
        if(count[i] != 0)
            break;
    }
    cout << endl;
    if(i == N)
        cout << "The two strings are anagrams." << endl;
    else
        cout << "The two strings are not anagrams." << endl;
    return 0;
}