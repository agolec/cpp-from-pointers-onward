#include <iostream>
using namespace std;

main(){
    void grabMemory();
    while(true){
        grabMemory();
    }
}

void grabMemory(){
    const int SIZE = 100;
    int *ptr = new int[SIZE];
    delete [] ptr;
}