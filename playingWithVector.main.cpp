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
//vector<int> vectorClean;
//int arrayOne[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
int arrayOne[] = {5, 4, 3, 2, 1, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

//int arraySize = arrayOne.size();

int fillVector(){
    int indexOne = 0;
    
    while(indexOne < 25) {
        vectorOne.insert(vectorOne.end(), arrayOne[indexOne]);
        indexOne++;
    }
    return 0;
}


int removeDuplicates(){
    fillVector();
    int vectorSizeStart = vectorOne.size();
    int removedElementsCount = 0;
    
    for(int indexOne = 0; indexOne < vectorOne.size(); ++ indexOne){
        for(int indexTwo = 0; indexTwo < vectorOne.size(); ++ indexTwo){
            
            if(vectorOne.at(indexOne) == vectorOne.at(indexTwo) and indexOne != indexTwo){
                vectorOne.erase(vectorOne.begin() + indexTwo);
                ++ removedElementsCount;
            }
            
        }
    }
    
    int vectorSizeFinish = vectorOne.size();
    int removeDuplicatesAssert = removedElementsCount + vectorSizeFinish;
    
    if (removeDuplicatesAssert == vectorSizeStart){
        cout << "Vector Size Start: " << vectorSizeStart << endl;
        cout << "Removed Elements: " << removedElementsCount << endl;
        cout << "Cleaned Vector Size: " << vectorSizeFinish << endl;
        cout << " " << endl;
    } else {
        cout << "Assert Error: remove duplicates from vector failed." << endl;
    }
    return 0;
}


int sortVector(){
    removeDuplicates();
    int indexOne = 0;
    int indexTwo = indexOne + 1;
    
    int swapElementOne = vectorOne.at(indexOne);
    int swapElementTwo = vectorOne.at(indexTwo);
    
    cout << swapElementOne << ", " << swapElementTwo << endl;
    
    if (swapElementOne > swapElementTwo){
        indexOne = indexTwo;
        indexTwo = indexTwo - 1;
        cout << indexOne << " " << indexTwo << endl;
        
         cout << swapElementOne << ", " << swapElementTwo << endl;
    }

    for (indexOne = 0; indexOne < vectorOne.size(); ++indexOne){
        cout << vectorOne.at(indexOne) << ", ";
        }
    cout << " " << endl;
    cout << vectorOne.size() << endl;
    return 0;
}


int main (){
    
    sortVector();
    
}
