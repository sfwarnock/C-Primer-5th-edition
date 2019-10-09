//
//  functions.cpp
//  functions
//
//  Created by Warnock, Scott A on 10/8/19.
//  Copyright © 2019 Warnock, Scott A. All rights reserved.
//

#include <iostream>

using namespace std;


void sayHi(string name, int age);

int main()
{
    sayHi("Mike", 35);
    return 0;
}

void sayHi(string name, int age)
{
    cout << "Hello " << name << " you are " << age << endl;
}
