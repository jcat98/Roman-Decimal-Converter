#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include "Decimal.h"
#include "Roman.h"

using namespace std;

//This function see if the users input had correct numeric values
bool isNumeric(string decimal){
    for(int i = 0; i < decimal.length(); i++){
        if(isdigit(decimal[i]) == false){
            return false;
        }
        return true;
    }
}
//This function sees if the users input had correct alphabetic characters
bool isLetter(string numeral){
    for(int i = 0; i < numeral.length(); i++){
        if(isalpha(numeral[i]) == false){
            return false;
        }
        return true;
    }
}

int main() {
    bool quitRDConverter = false;
    while(!quitRDConverter){
        string userInputQuit;

        //Input to see if user to convert from Rom to Dec or Dec to Rom
        string userInput;
        cout << "Would you like to convert to a numeral or decimal? " << endl;
        cin >> userInput;

        //If the user wants to convert from Roman to Decimal
        if(userInput == "numeral") {
            string userInputDecimal;
            cout << "Enter a decimal: " << endl;
            cin >> userInputDecimal;

            if(isNumeric(userInputDecimal)){
                int num = stoi(userInputDecimal);
                Roman numeral;
                numeral.Converter(num);
                numeral.Clear();
            }
        }

        //If the user wants to convert from Decimal to Roman
        else if(userInput == "decimal"){
            string userInputNumeral;
            cout << "Enter a numeral: " << endl;
            cin >> userInputNumeral;

            if(isLetter(userInputNumeral)) {
                Decimal number;
                number.NumeralCharToNums(userInputNumeral);
            }
        }

        //If the does not give a valid input
        else {
            cout << "ERROR: Invalid Input" << endl;
            cout << "Enter a valid input" << endl;
            cout << endl;
        }

        //Asks if the user wants to run the converter again
        cout << "Would you like to convert another?(yes/no) " << endl;
        cin >> userInputQuit;

        //Quits the program if the user does not want to convert again
        if(userInputQuit == "no"){
            quitRDConverter = true;
        }
    }
}
