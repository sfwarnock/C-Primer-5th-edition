//
//  main.numbers.cpp
//
//
//  Created by Warnock, Scott A on 10/2/19.
//  Copyright © 2019 Warnock, Scott A. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << 39 << endl;
    cout << 39.12 << endl;
    
    cout << 14 + 7 << endl;
    cout << 14 - 7 << endl;
    cout << 14 * 7 << endl;
    cout << 14 / 7 << endl;
    cout << 21 % 10 << endl;
    
    cout << 4 + 5 * 10 << endl;
    cout << (4 + 5) * 10 << endl;
    
    int whole_number = 5;
    double decimal_number = 5.5;
    
    whole_number++;
    cout << whole_number << endl;
    
    decimal_number--;
    cout << decimal_number << endl;
    
    whole_number += 80;
    cout << whole_number << endl;
    
    cout<< decimal_number + 5 << endl;
    
    cout << pow(5, 2) << endl;
    cout << pow(3, 3) << endl;
    
    cout << sqrt(9) << endl;
    
    cout << round(4.6) << endl;
    
    cout<< ceil(4.1) << endl;
    cout<< floor(4.9) << endl;
    
    cout<< fmax(3,10) << endl;
    cout<< fmin(3, 10) << endl;
    
    return 0;
    
}
