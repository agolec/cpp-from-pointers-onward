//this program uses a pointer to diplay the contents of an array.
#include <iostream>
using namespace std;

int main(){
    const int SIZE = 8;
    int set[SIZE] = {5,10,15,20,25,30,35,40};
    int *numPtr = nullptr;  
    int count;
           

    //Make numPtr point to the set array
    numPtr = set;
    cout << "The numbers in the set are:\n";
    for(count = 0; count < SIZE; count++){
        cout << *numPtr << " ";
        numPtr++;
    }
    cout << endl;
    
    cout << "set address is " << &numPtr << endl;
    cout << "The numbers in the set backwards are:\n";
    for(int i = 0; i < SIZE; i++){
        numPtr--;
        cout << *numPtr << " ";
    }
    return 0;
}