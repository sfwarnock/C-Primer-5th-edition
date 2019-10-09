//
//  returnStatement.cpp
//  returnStatement
//
//  Created by Warnock, Scott A on 10/9/19.
//  Copyright © 2019 Warnock, Scott A. All rights reserved.
//

#include <iostream>

using namespace std;

double cube(double num)
{
    double result = num * num * num;
    return result;
}

int main()
{
    double answer = cube(5.0);
    cout << answer << endl;
    return 0;
}
