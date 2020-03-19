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
        vectorOne.insert(vectorOne.end(), arrayOne[indexOne]);
        //cout << vectorOne.at(indexOne) << " " << indexOne << endl;
        indexOne++;
    }
    cout << vectorOne.size() << endl;
    return 0;
}

int removeDuplicates(){
    int vectorSize = vectorOne.size();
    cout << vectorSize << endl;

    for(int indexOne = 0; indexOne < 25; indexOne ++){
        for(int indexTwo = 0; indexTwo < 25; indexTwo++){
            //cout << "Starting Point " << vectorOne.at(indexOne) << " " << vectorOne.at(indexTwo) << endl;
            if(vectorOne.at(indexOne) == vectorOne.at(indexTwo) && indexOne != indexTwo){
                cout << "If " << vectorOne.at(indexOne) << " " << vectorOne.at(indexTwo) << endl;
                //vectorOne.erase(vectorOne.begin() + vectorOne.at(indexTwo));
                //vectorSize --;
            } else {
                cout << "Else " << vectorOne.at(indexOne) << " " << vectorOne.at(indexTwo) << endl;
                //continue;
            }
        }
        //indexOne ++;
    }
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
