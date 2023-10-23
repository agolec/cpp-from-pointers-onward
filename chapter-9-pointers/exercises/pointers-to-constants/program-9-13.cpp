//Demonstrates pointers to constants.

#include <iostream>
using namespace std;

void displayValues(const int *, int);

main(){
    const int SIZE = 6;
    const int array1[SIZE] = {1,2,3,4,5,6};
    int array2[SIZE] = {2,4,6,8,10,12};

    displayValues(array1,SIZE);

    displayValues(array2,SIZE);

    return 0;
}

void displayValues(const int *numbers, int size){
    for(int i = 0; i < size; i++){
        cout << *(numbers + i) << " ";
    }
    cout << endl;
}