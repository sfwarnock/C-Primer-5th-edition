//
//  Created by Warnock, Scott A on 2/28/20.
//  Copyright © 2020 Warnock, Scott A. All rights reserved.
//

#include<iostream>
#include<vector>
using namespace std;

int arrayOne [5] = {2, 4, 6, 8, 10};
int arrayTwo [5] = {1, 3, 5, 7, 9};
vector<int> summedArrays;

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
            summedArrays.insert(summedArrays.begin(), squareResult);
        }
    }
    return 0;
}

int cleanAndSortVector(){
    int vectorSizeStart = summedArrays.size();

    for(int vectorIndexOne = 0; vectorIndexOne < vectorSizeStart; vectorIndexOne++){
        for(int vectorIndexTwo = 1; vectorIndexTwo < vectorSizeStart; vectorIndexTwo++){
            if(summedArrays.at(vectorIndexOne) == summedArrays.at(vectorIndexTwo)){
                cout << "If executed " << summedArrays.at(vectorIndexOne) << " " << summedArrays.at(vectorIndexTwo) << endl;
                //summedArrays.erase(summedArrays.begin(), summedArrays.begin() +vectorIndexTwo);
            } else {
                cout << "Else executed " << summedArrays.at(vectorIndexOne) << " " << summedArrays.at(vectorIndexTwo) << endl;
            }
        }
    }
    
    int vectorSizeClean = summedArrays.size();
    cout << vectorSizeClean << endl;
    return 0;
}

int main(){
    int result = arraySums(result);
    int resul2 = cleanAndSortVector();
}
