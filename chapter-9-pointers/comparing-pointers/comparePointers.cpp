//program is meant to demonstrate how to use pointer comparison.

#include <iostream>
using namespace std;

int main(){
    const int SIZE = 8;
    int set[SIZE] = {5,10,15,20,25,30,35,40};
    int *nums = set;    //pointer to set array.

    //Display the number in the set array.
    cout << "The numbers are in set array are:\n";
    cout << *nums << " ";   // Display first element.

    //&set returns the address of set. std::size(set) - 1 returns 7, the last 
    //memory address in the array.
    while(nums < &set[SIZE - 1]){ //The book wanted to hardcode this as &set[7] and not use
    //a SIZE constant.
        //Advance nums to point to the next element
        nums++;
        //Display the value pointed to
        cout << *nums << " ";
    }
    //Set up endl.
    cout << endl;

    //Display the first element.
    cout << "The numbers backwards are: " << *nums << " ";
    //Display the same array backwards
    while(nums > set){
        //Move backwards to the previous element.
        nums--;
        //Display the element being pointed to.
        cout << *nums << " ";
    }
}