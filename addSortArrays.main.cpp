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
vector<int> cleanedVector;

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
            summedArrays.insert(summedArrays.end(), squareResult);
        }
    }
    return 0;
}

int cleanAndSortVector(){
    int vectorSizeStart = summedArrays.size();
    cout<< "Array Elemenet Zero = " << summedArrays.at(0) << endl;
    cout << vectorSizeStart << endl;
    int vectorIndexOne = 0;
        
    for(vectorIndexOne; vectorIndexOne < vectorSizeStart; vectorIndexOne++){
        for(int vectorIndexTwo = 1; vectorIndexTwo < vectorSizeStart; vectorIndexTwo++){
            if(summedArrays.at(vectorIndexOne) == summedArrays.at(vectorIndexTwo)){
                cout << "If executed " << summedArrays.at(vectorIndexOne) << " " << summedArrays.at(vectorIndexTwo) << endl;
                summedArrays.erase(summedArrays.begin() + vectorIndexTwo);
                //vectorSizeStart --;
            } else {
            cout << "Else executed " << summedArrays.at(vectorIndexOne) << " " << summedArrays.at(vectorIndexTwo) << endl;
                
                continue;
            }
        vectorSizeStart --;
        }
    //cleanedVector.insert(cleanedVector.begin(), summedArrays.at(vectorIndexOne));
    }

    //int vectorSizeClean = cleanedVector.size();
    int vectorSizeFinish = summedArrays.size();
    cout << vectorSizeFinish << endl;
    //cout << vectorSizeClean << endl;
    cout<< "Array Elemenet Zero = " << cleanedVector.at(0) << endl;
    return 0;
}

int main(){
    int result = arraySums(result);
    int result2 = cleanAndSortVector();
}
