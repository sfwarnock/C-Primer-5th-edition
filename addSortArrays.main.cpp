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
    for(int arrayOneElement = 0; arrayOneElement < 5; arrayOneElement++){
        int arraySum = arrayOne[arrayOneElement] + arrayTwo[arrayTwoElement];
        return arraySum;
    }
    return 0;
}

int squareSum(int sumOfArray){
    
    int arraySquared = sumOfArray * sumOfArray;
    newList.insert(newList.begin(), arraySquared);
    return 0;
}

int main(){
    for(int i = 0; i < 5; i++){
        cout<< arrayOne[i] << endl;
    }
    int indexOne = 0, indexTwo = 0;
    cout << sumArrayElements(indexOne, indexTwo) << endl;
    return 0;
}
