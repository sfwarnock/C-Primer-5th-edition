//
//  user_input.cpp
//  user_input
//
//  Created by Warnock, Scott A on 10/3/19.
//  Copyright © 2019 Warnock, Scott A. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    string location;
    cout << "What city would you like to live in?" << endl;
    getline(cin, location);
    
    int zip;
    cout << "What is the zip code of " << location << endl;
    cin >> zip;
    cout << "The zip code for " << location << "is " << zip << endl;
    
    return 0;
}
