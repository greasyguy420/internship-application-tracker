#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    //Allocates space for a 5 integer array
    int *array = new int[5];
    cout << "Enter integers in the array one at a time:" << endl;
    //Input the numbers into the array one at a time
    for(int i = 0; i < 5; i++){
        cin >> array[i];
    }
    //Output each element of the array
    for(int i = 0; i < 5; i++){
        cout << array[i] << ' ';
    }
    cout << endl;
    //Deallocate the memory of the array
    delete [] array;

    return 0;
}