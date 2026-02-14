#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = {4, 2, 8, 1};

    sort(v.begin(), v.end());

    for (int x : v)
        cout << x << " ";
    
    cout << endl;

    return 0;
}