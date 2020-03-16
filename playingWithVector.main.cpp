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
int arrayOne[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
//int arraySize = arrayOne.size();

int fillVector(){
    int indexOne = 0;
    while(indexOne < 25){
        vectorOne.insert(vectorOne.end(), indexOne);
        indexOne++;
    }
    cout << vectorOne.size() << endl;
    return 0;
}

int removeDuplicates(){
    int vectorSize = vectorOne.size();
    int indexTwo = 1;
    for(int indexOne = 0; indexOne <= vectorSize; indexOne++){
        if(vectorOne.at(indexOne) == vectorOne.at(indexTwo)){
            vectorOne.erase(vectorOne.begin() + indexTwo);
            indexTwo++;
            cout << indexTwo << "Removed from Vector" << endl;
        }
    vectorSize --;
    }
    return 0;
}

int sortVector(){
    
    return 0;
}

int main (){
    removeDuplicates();
}
