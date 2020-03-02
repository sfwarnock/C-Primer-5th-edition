//
//  Created by Warnock, Scott A on 2/28/20.
//  Copyright © 2020 Warnock, Scott A. All rights reserved.
//

#include<iostream>
#include<vector>
using namespace std;

int arrayOne [5] = {2, 4, 6, 8, 10};
int arrayTwo [5] = {1, 3, 5, 7, 9};
vector<int> newList;

int square(int number){
    return number * number;
}

int squareofsum(int variableOne, int variableTwo){
    int result = square(variableOne + variableTwo);
    return result;
}

int main(){
    int inputNumberOne = arrayOne[0], inputNumberTwo = arrayTwo[2];
    int total = squareofsum(inputNumberOne, inputNumberTwo);
    cout<< total << endl;
}
