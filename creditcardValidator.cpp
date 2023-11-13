#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

bool isNumberString(const string s){
    int l = s.length();
    for(int i = 0; i < l ; i++){
        if(s[i] < '0' || s[i] > '9'){
            return false;
        }
    }
    return true; 
}

int main(){
    string ccNumber;
    cout << "luhn's Algorithm to check the validity of the Credit Card Number.\n";
    cout << "You can enter Exit any time to Quit.\n";

    while(true){
        cout <<  "Enter the Cc Number: ";
        cin >> ccNumber;
        if(ccNumber == "exit"){
            break;
        }
        else if(!isNumberString(ccNumber)){
            cout << "Bad Input";
            continue;
        }
        int len = ccNumber.length();
        int doubleEvenSum = 0;
        for(int i = len - 2;i>=0;i = i-2){
            int doubleNumber = ((ccNumber[i]-48)*2);
            if(doubleNumber > 9){
                doubleNumber = (doubleNumber / 10) + (doubleNumber % 10);
            }
            doubleEvenSum += doubleNumber;
        }
        for (int i = len -1;i>=0;i = i-2){
            doubleEvenSum += (ccNumber[i]- 48);
        }
        cout << doubleEvenSum;
        if(doubleEvenSum % 10 == 0){
            cout << "Valid Credit Card Number.";
        }
        else{
            cout << "\nInvalid Credit Card Number.";
        }
        continue;
    }
    return 0;
}