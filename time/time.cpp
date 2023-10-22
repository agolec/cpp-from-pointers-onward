#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int countEvenNumbersByOnes();
int countEvenNumbersByTwos();

int main(){
    const int SIZE = 2;
    double operationsTaken[SIZE];


    operationsTaken [0] = countEvenNumbersByOnes();

    cout << "Operations Taken for counting by ones is: " << operationsTaken[0] << endl;

    operationsTaken[1] = countEvenNumbersByTwos();

    cout << "Operations Taken for counting by twos is: " << operationsTaken[1] << endl;

    return 0;
}

int countEvenNumbersByOnes(){
    int number = 0;
    int iterations = 0;
    const int SIZE = 500000;
   while(number <= SIZE){
        if(number % 2 == 0){
            //cout << number << " ";
        }
        number++;
        iterations++;
   }
   return iterations;
}
int countEvenNumbersByTwos(){
    int number = 0;
    int iterations = 0;
    const int SIZE = 500000;
    while(number <= SIZE){
        number += 2;
        iterations++;
    }
    return iterations;
}