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
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
    }
    
    return dayName;
}



int main()
{
    cout << dayOfWeek(3)<< endl;
    
    return 0;
}
