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
            newList.insert(newList.begin(), squareResult);
        }
    }
    cout << newList.size() << endl;
    cout << newList.front() << endl;
    cout << newList.back() << endl;
    cout << newList.at(2) <<endl;
    return 0;
}

int cleanAndSortVector(int insertElement){
//    int indexOne = 0;
  //  for(int indexTwo = 0; indexTwo => 1; indexTwo++){
    //    if(newList.at(indexTwo) > newList.at(indexOne)){
      //      newList.at(indexOne)
        //} else{
          //  indexTwo++;
        //}
        //indexOne++;
    //}
    return 0;
}

int main(){
    int result = arraySums(result);
}
