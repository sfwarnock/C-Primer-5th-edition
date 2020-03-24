//
//  playingWithVector.cpp
//  playingWithVectors
//
//  Created by Warnock, Scott A on 3/16/20.
//  Copyright © 2020 Warnock, Scott A. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> vectorOne;
vector<int> vectorClean;
int arrayOne[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

//int arraySize = arrayOne.size();

int fillVector(){
    int indexOne = 0;
    
    while(indexOne < 25) {
        vectorOne.insert(vectorOne.end(), arrayOne[indexOne]);
        indexOne++;
    }
    
    //int vectorSizeStart = vectorOne.size();
    //cout << "Initial Vector size: " << vectorSizeStart << endl;
    
    return 0;
}


int removeDuplicates(){
    fillVector();
    int vectorSizeStart = vectorOne.size();
    int removedElementsCount = 0;
    int vectorSizeFinish;
    
    for(int indexOne = 0; indexOne < vectorOne.size(); ++ indexOne){
        for(int indexTwo = 0; indexTwo < vectorOne.size(); ++ indexTwo){
            
            if(vectorOne.at(indexOne) == vectorOne.at(indexTwo) and indexOne != indexTwo){
                vectorOne.erase(vectorOne.begin() + indexTwo);
                ++ removedElementsCount;
            }
            
        }
    }
    
    vectorSizeFinish = vectorOne.size();
    
    int removeDuplicatesAssert = removedElementsCount + vectorSizeFinish;
    
    cout << "Vector Size Start: " << vectorSizeStart << endl;
    cout << "Removed Elements: " << removedElementsCount << endl;
    cout << "Cleaned Vector Size: " << vectorSizeFinish << endl;
    cout << removeDuplicatesAssert << endl;
    return 0;
}


int sortVector(){
    
    return 0;
}


int main (){
    
    removeDuplicates();
    
}
