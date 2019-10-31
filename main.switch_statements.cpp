//
//
//  main.switch_statements.cpp
//
//  Created by Warnock, Scott A on 10/24/19.
//  Copyright © 2019 Warnock, Scott A. All rights reserved.
//

#include <iostream>

using namespace std;

string dayOfWeek(int dayNumber){
    string dayName;
    
    switch(dayNumber){
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayname = "Tuesday";
    }
}



int main()
{
    cout << dayOfWeek(3)<< endl;
    
    return 0;
}
