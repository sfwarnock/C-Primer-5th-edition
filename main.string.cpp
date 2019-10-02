//
//  main.string.cpp
//
//  Created by Warnock, Scott A on 10/1/19.
//  Copyright © 2019 Warnock, Scott A. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    
    string location = "Telluride, Colorado";
    cout << location << endl;
    
    cout << location.length() << endl;
    
    cout << location[0] << endl;
    cout << location[3] << endl;
    
    location[0] = 't';
    cout << location << endl;
    
    cout << location.find("ride", 0) << endl;
    
    string location_state;
    location_state = location.substr(11, 9);
    cout << location_state << endl;
    
    return 0;
}
