#include <vector>
#include <iostream>
#include <map>
using namespace std;

#include "Roman.h"

//This function does almost all the converting process. It takes in a decimal input and creates a
//vector of Roman numerals. If the decimal value is greater than or equal to the checker value then
//it divides the decimal value to see how many times that roman numeral needs to be added to the string
//vector. Then it finds the remainder, makes that the new decimal, and continues until the decimal
//value is 0;
void Roman::Converter(int decimalInput){
    int decimal = decimalInput;
    while(decimal > 0){
        if(decimal >= 1000){
            int divNum = decimal / 1000;
            AddToString(1000,divNum);
            decimal = decimal % 1000;
        }
        else if(decimal >= 900){
            int divNum = decimal / 900;
            AddToString(900,divNum);
            decimal = decimal % 900;
        }
        else if(decimal >= 500) {
            int divNum = decimal / 500;
            AddToString(500, divNum);
            decimal = decimal % 500;
        }
        else if(decimal >= 400){
            int divNum = decimal / 400;
            AddToString(400,divNum);
            decimal = decimal % 400;
        }
        else if(decimal >= 100){
            int divNum = decimal / 100;
            AddToString(100,divNum);
            decimal = decimal % 100;
        }
        else if(decimal >= 90){
            int divNum = decimal / 90;
            AddToString(90,divNum);
            decimal = decimal % 90;
        }
        else if(decimal >= 50){
            int divNum = decimal / 50;
            AddToString(50,divNum);
            decimal = decimal % 50;
        }
        else if(decimal >= 40){
            int divNum = decimal / 40;
            AddToString(40,divNum);
            decimal = decimal % 40;
        }
        else if(decimal >= 10){
            int divNum = decimal / 10;
            AddToString(10,divNum);
            decimal = decimal % 10;
        }
        else if(decimal >= 9){
            int divNum = decimal / 9;
            AddToString(9,divNum);
            decimal = decimal % 9;
        }
        else if(decimal >= 5){
            int divNum = decimal / 5;
            AddToString(5,divNum);
            decimal = decimal % 5;
        }
        else if(decimal >= 4){
            int divNum = decimal / 4;
            AddToString(4,divNum);
            decimal = decimal % 4;
        }
        else if(decimal >= 1){
            int divNum = decimal / 1;
            AddToString(1,divNum);
            decimal = decimal % 1;
        }
    }
    PrintDecimal();
}
//This function appends the correct numeral to the numeral vector
void Roman::AddToString(int num, int iteration){
    map<int,string> romanNumerals = {{1,"I"},{4,"IV"},{5,"V"},{9,"IX"},{10,"X"},{40,"XL"},{50,"L"},
                                     {90,"XC"},{100,"C"},{400,"CD"},{500,"D"},{900,"CM"},{1000,"M"}};
    for(unsigned i = 0; i < iteration; i++){
        numeral.push_back(romanNumerals[num]);
    }
}
//This function prints the numeral vector
void Roman::PrintDecimal(){
    for(int i = 0; i < numeral.size(); i++){
        cout << numeral.at(i);
    }
    cout << endl;
}
//This function clears the numeral vector
void Roman::Clear(){
    numeral.erase(numeral.begin(), numeral.end());
}