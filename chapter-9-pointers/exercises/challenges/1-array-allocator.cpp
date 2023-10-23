/*

Write a function that dynamically allocates an array of integers. The function should accept an integer argument indicating the number of elements to allocate. The function should return a pointer to the array.

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int *allocation(int);
void setAllocation(int *);
void fillArray(int *,int);
void printArray(int *,int);

main(){
    cout << "START PROGRAM" << endl;
    int sizeOfArray = 0;
    int* array = nullptr;

    setAllocation(&sizeOfArray);
    cout << "allocating " << sizeOfArray << " elements." << endl;

    array = allocation(sizeOfArray);
    cout << "array is of size :" << sizeOfArray << endl;

    fillArray(array, sizeOfArray);
    printArray(array, sizeOfArray);

    cout << "END PROGRAM" << endl;
    return 0;
}

void setAllocation(int *sizeOfArray){
    cout << "Enter the number of elements to allocate memory for: ";
    cin >> *sizeOfArray;
}

int *allocation(int size){
    cout << "Allocating memory. . ." << endl;
    int* array = new int[size];
    return array;
}
void fillArray(int* array, int size){
    for(int i = 0; i < size; i++){
        *(array+i) = (rand() % 100) + 1;
    }
}
void printArray(int* array, int size){
    cout << "Printing array. . ." << endl;
    for(int i = 0; i < size; i++){
        cout << *(array + i) << " ";
    }
    cout << endl;
}