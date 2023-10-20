#include <iostream>
#include <string>
using namespace std;

const int NUMBER_OF_PRODUCTS = 9;
const int MIN_PRODUCT_NUMBER = 914;
const int MAX_PRODUCT_NUMBER = 922;

//Function Prototypes
int getProductNumber();
int binarySearch(const int[],int,int);
void displayProduct(const string[],const string[],const double[], int);

int main(){
    int id[NUMBER_OF_PRODUCTS] = {914,915,916,917,918,919,920,921,922};

    string title[NUMBER_OF_PRODUCTS] = {"Six Steps to Leadership",
                                        "Six Steps to Leadership",
                                        "The Road to Excellence",
                                        "Seven Lessons of Quality",
                                        "Seven Lessons of Quality",
                                        "Seven Lessons of Quality",
                                        "Teams Are Made, Not Born",
                                        "Leadership for the Future",
                                        "Leadership for the Future"};

    string description[NUMBER_OF_PRODUCTS] = {
        "Book","Audio CD","DVD",
        "Book","Audio CD","DVD",
        "Book","Book","Audio CD",
    };

    double prices[NUMBER_OF_PRODUCTS] = {12.95, 14.95,18.95,16.95,21.95,
    31.95,14.95,14.95,16.95};

    int productNumber;
    int index;
    char again;

    do{
        productNumber = getProductNumber();
        index = binarySearch(id,NUMBER_OF_PRODUCTS,productNumber);

        if(index == -1){
            cout << "Index not found" << endl;
        } else {
            displayProduct(title,description,prices,index);
        }
        cout << "Would you like to look up another product? (y/n): ";
        cin >> again;
    }while(again == 'Y' || again == 'y');
    return 0;
}

int getProductNumber(){
    int productNumber;

    cout << "Enter the item's product number: ";
    cin >> productNumber;
    while(productNumber < MIN_PRODUCT_NUMBER || productNumber > MAX_PRODUCT_NUMBER){
        cout << "Enter a number in the range of " << MIN_PRODUCT_NUMBER;
        cout << " through  " << MAX_PRODUCT_NUMBER << ".\n";
        cin >> productNumber;
    }
    return productNumber;
}

int binarySearch(const int array[], int numberOfElements, int value){
    int first = 0,
    last = numberOfElements - 1,
    middle,
    position = -1;
    bool found = false;

    while(!found && first <= last){
        middle = (first + last) / 2;
        if(array[middle] == value){
            found = true;
            position = middle;
        } else if (array[middle] > value) {
            last = middle - 1;
        }else{
            first = middle + 1;
        }
    }
    return position;
}

void displayProduct(const string title[],const string productDescription[],
const double price[], int index){
    cout << "Title: " << title[index] << endl;
    cout << "Description: " << productDescription[index] << endl;
    cout << "Price: $" << price[index] << endl;
}

