#include <vector>
#include <iostream>
#include <string>
using namespace std;

#include "Decimal.h"

//This functions loops through the numeral input and converts each character
//into a decimal value and appends to a vector of integers. Then it passes
//the vector of integers into the convertor function.
void Decimal::NumeralCharToNums(string numeralInput){
    vector<int> nums;
    for (unsigned i = 0; i < numeralInput.length(); i++){
        if(numeralInput[i] == 'I'){
            nums.push_back(1);
        }
        else if(numeralInput[i] == 'V'){
            nums.push_back(5);
        }
        else if(numeralInput[i] == 'X'){
            nums.push_back(10);
        }
        //Needs to be an 'L'
        else if(numeralInput[i] == 'X'){
            nums.push_back(50);
        }
        else if(numeralInput[i] == 'C'){
            nums.push_back(100);
        }
        else if(numeralInput[i] == 'D'){
            nums.push_back(500);
        }
        else if(numeralInput[i] == 'M'){
            nums.push_back(1000);
        }
    }

    Converter(nums);
}
//I did not get this function to work in time. This function was supposed to take
//the vector of ints and convert them into the correct decimal value. My thought
//process was that it would look at the index of the vector and if the value was
// greater than or equal to the next index that it would add the current index
//to the decimal value. And if the next index was greater than the current one then
//it would subtract the current index from the next index and add that value to the
//decimal value. Then it prints the decimal value.
void Decimal::Converter(vector<int> nums){
    int decimal = 0;
    for(unsigned i = 0; i < nums.size();i++){
        //Needs to be nums.at(i) >= nums.at(i+1)
        if(nums.at(i) >= nums.at(i)){
            decimal += nums.at(i);
        }
        else{
            decimal += (nums.at(i+1) - nums.at(i));
            i++;
        }
    }
    cout << decimal << endl;
}
