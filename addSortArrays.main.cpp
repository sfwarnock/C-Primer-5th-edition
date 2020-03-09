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

int sumArrayElements(int arrayOneElement, int arrayTwoElement){
    int arraySum = arrayOne[arrayOneElement] + arrayTwo[arrayTwoElement];
    return arraySum;
}

int squareSum(int sumOfArray){
    int arraySquared = sumOfArray * sumOfArray;
    return arraySquared;
}

int arraySums(int result){
    for(int indexTwo = 0; indexTwo <5; indexTwo++){
        for(int indexOne = 0; indexOne <5; indexOne++){
            result = sumArrayElements(indexOne, indexTwo);
            int squareResult = squareSum(result);
            cout << squareResult << endl;
            newList.insert(newList.begin(), squareResult);
        }
    }
    cout << newList.size() << endl;
    return 0;
}

int insertVector(int insertElement){
    int elementToInsert = squareSum(insertElement);
    //int vectorValue = newList.at(elementToInsert);
    cout << squareSum(insertElement) << endl;
    //for(int vectorIndex = 0; vectorIndex >= 0; vectorIndex++){
            //if (vectorValue == elementToInsert){
              //  break;
           // } else {
                //newList.insert(newList.begin(), elementToInsert);
                //cout << newList.size() << endl;
            //}
    //}
    return 0;
}
// look for dupilcate
    // sort
        //insert



int main(){
    int result = arraySums(result);
}

//for(int vectorIndex = 0; vectorIndex >= 0; vectorIndex++){
   // if (vectorValue > elementToInsert){
        // move one position to the right
    //} else {
        // insert
    //}

