//
//  main.for_calculator.cpp
//
//  Created by Warnock, Scott A on 10/24/19.
//  Copyright © 2019 Warnock, Scott A. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    char oper;
    
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter operator: " << endl;
    cin >> oper;
    cout << "Enter second number: " << endl;
    cin >> num2;
    
    double result;
    
    if(oper == '+'){
        result = num1 + num2;
    } else if(oper == '-'){
        result = num1 - num2;
    } else if(oper == '/'){
        result = num1 / num2;
    } else if(oper == '*'){
        result = num1 * num2;
    } else {
        cout << "Invalid operator given." << endl;
    }
    cout << result << endl;
    
    return 0;
}
