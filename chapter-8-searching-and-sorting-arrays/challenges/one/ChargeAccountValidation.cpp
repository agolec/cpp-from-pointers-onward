#include <iostream>
#include <string>

using namespace std;

const int NUMBER_OF_ACCOUNTS = 18;

int searchList(const int[],int, int);
int getChargeAccount();

main(){

    int chargeAccountNumbers[NUMBER_OF_ACCOUNTS] = 
    { 5194333,7339284,1293390,7393828,4228341,4992112,
    1302850,8080152,4562555,5552012,5050123,7825877,
    1250255,4493282,1000543,6543231,3852085,7576651};
    
    int userEnteredChargeAccount = 0;
    int searchResult = -1;

    userEnteredChargeAccount = getChargeAccount();

    searchResult = searchList(chargeAccountNumbers,NUMBER_OF_ACCOUNTS,userEnteredChargeAccount);

    if(searchResult == -1){
        cout << "Charge Number not valid" << endl;
    } else {
        cout << "Charge Account number valid" << endl;
    }
    return 0;
}

int getChargeAccount(){
    int chargeAccountNumber = 0;
    cout << "Enter a charge account number: ";
    cin >> chargeAccountNumber;

    return chargeAccountNumber;
}

int searchList(const int list[], int numberOfElements, int chargeAccountNumberEntered
){
    int index = 0;
    int position = -1;
    bool found = false;

    while(index < numberOfElements && !found){
        if(list[index] == chargeAccountNumberEntered){
            found = true;
            position = index;
        } 
    }

    return position;
}
