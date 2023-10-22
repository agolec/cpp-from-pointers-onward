#include <iostream>
using namespace std;

int main(){
    int* ptr = nullptr;
    int x = 25;

    ptr = &x;
    cout << "The value of x is " << *ptr << endl;
    cout << "The memory address of x is " << ptr << endl;
    *ptr = 100;
    cout << "The value of x has changed. It is now " << x << endl;

    return 0;
}