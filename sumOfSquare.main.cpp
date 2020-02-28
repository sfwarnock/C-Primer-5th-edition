//
//  Created by Warnock, Scott A on 2/28/20.
//  Copyright © 2020 Warnock, Scott A. All rights reserved.
//


#include<iostream>
using namespace std;

int square(int number){
    return number * number;
}

int squareOfSum(int variableOne, int variableTwo){
    int result = square(variableOne + variableTwo);
    return result;
}

int main(){
    int total;
    int inputNumberOne = 4, inputNumberTwo = 8;
    total = squareOfSum(inputNumberOne,inputNumberTwo);
    cout<< total << endl;
}
