//this program uses two functions that accept addresses of variables
//as arguments.

#include <iostream>
using namespace std;

void getNumber(int *);
void doubleValue(int *);

int main(){
    int value = 0;
    cout << "Value is " << value << endl;
    getNumber(&value);
    doubleValue(&value);
    //display the resulting number.
    cout << "The value has been doubled to " << value << endl;
    return 0;
}

//Definition of getNumber. The parameter, input, is a pointer.
//This function asks the user for a number. The value entered is stored in
//the variable pointed to by input.
void getNumber(int *input){
    cout << "Enter an integer number: ";
    cin >> *input;
}
//Definition of doubleValue. The parameter value, is a pointer.
//This function multiplies the variable pointed to by val, by two.
void doubleValue(int *value){
    *value *= 2;
}