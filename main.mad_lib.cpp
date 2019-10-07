//
//  mad_lib.cpp
//  madlib
//
//  Created by Warnock, Scott A on 10/7/19.
//  Copyright © 2019 Warnock, Scott A. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    string color, plural_Noun, athlete;
    
    cout << "Enter a color: " << endl;
    getline(cin, color);
    cout << "Enter a plural noun: " << endl;
    getline(cin, plural_Noun);
    cout << "Enter in the name of an athlete: " << endl;
    getline(cin, athlete);
    
    cout << "Roses are " << color << endl;
    cout << plural_Noun << " are blue" << endl;
    cout << "I love " << athlete << endl;
    
    return 0;
}
