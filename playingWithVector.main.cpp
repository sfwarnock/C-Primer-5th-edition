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
    cout << vectorOne.size() << endl;
    return 0;
}

int removeDuplicates(){
    int removedElementsCount = 0;
    
    for(int indexOne = 0; indexOne < vectorOne.size(); ++ indexOne){
        for(int indexTwo = 0; indexTwo < vectorOne.size(); ++ indexTwo){
            
            if(vectorOne.at(indexOne) == vectorOne.at(indexTwo) and indexOne != indexTwo){
                vectorOne.erase(vectorOne.begin() + indexTwo);
                ++ removedElementsCount;
            }
            
        }
    }
    cout << removedElementsCount << endl;
    cout << vectorOne.size() << endl;
    return 0;
}

int vectorCleanAssert(){
    
    return 0;
    
}

int sortVector(){
    
    return 0;
}

int main (){
    fillVector();
    removeDuplicates();
}
