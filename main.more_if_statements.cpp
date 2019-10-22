//
//  main.more_if_statements.cpp
//
//  Created by Warnock, Scott A on 10/22/19.
//  Copyright © 2019 Warnock, Scott A. All rights reserved.
//

#include <iostream>

using namespace std;

int getMax(int num1, int num2){
    int result;
    
    if (num1 > num2){
        result = num1;
    } else {
        result = num2;
    }
     
    return result;
}


int getMin(int num3, int num4, int num5){
    
}


int main()
{
    cout << getMax(21, 42) << endl;
    cout << getMin(21, 42, 88) << endl;
    return 0;
}
