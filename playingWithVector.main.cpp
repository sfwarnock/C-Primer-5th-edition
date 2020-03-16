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
    int indexOne = 0;
    
    for(int indexTwo = 1; indexTwo <= vectorSize; indexTwo++){
        //cout << vectorOne.at(indexOne) << endl;
        if(vectorOne.at(indexOne) == vectorOne.at(indexTwo)){
            cout << vectorOne.at(indexOne) << " " << vectorOne.at(indexTwo) << endl;
            vectorOne.erase(vectorOne.begin() + indexTwo);
            //indexTwo++;
            cout << "If Executed" << indexTwo << "Removed from Vector" << endl;
        } else{
            cout << "Else excuted " << vectorOne.at(indexOne) << " " << vectorOne.at(indexTwo) << endl;
        }
    }
    vectorSize --;
    cout << vectorSize << endl;
    return 0;
}

int sortVector(){
    
    return 0;
}

int main (){
    fillVector();
    removeDuplicates();
}
