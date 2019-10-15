//
//  if_Statement.cpp
//
//  Created by Warnock, Scott A on 10/15/19.
//  Copyright © 2019 Warnock, Scott A. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    bool isMale = true;
    bool isTall = false;
    
    if (isMale && isTall){
        cout << "You are a tall male.";
    } else if(isMale && !isTall){
        cout << "You are a short male.";
    } else if(!isMale && isTall){
        cout << "You are tall but not male.";
    } else {
        cout << "You are not male and not tall";
    }

    // or operator (||)
    // and operator (&&)
    // negation operator (! = is not)
    
    return 0;
}
