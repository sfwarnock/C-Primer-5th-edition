//
//  while.cpp
//  while.statement
//
//  Created by Warnock, Scott A on 10/31/19.
//  Copyright © 2019 Warnock, Scott A. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int index = 6;
    do {
        cout << index << endl;
        index++;
    } while (index <= 5);
    
    return 0;
}
