//
//  xy_coordinates.main.cpp
//  xy_coordinates
//
//  Created by Warnock, Scott A on 12/2/19.
//  Copyright © 2019 Warnock, Scott A. All rights reserved.
//

#include <iostream>

using namespace std;

int getForm(){
    int result;
    
    int standardFrom;
    int slopeIntercept;
    
    cout << "Press '1' for Standard Form" << endl;
    cout << "Press '2' for Slope Intercept Form" << endl;
    
    int selected;
    
    cin >> selected;
    
    if (selected == 1){
        result = standardFrom;
        cout << "You selected Standard Form" << endl;
    } else if (selected == 2){
        result = slopeIntercept;
        cout << "You selected Slope Intercept From" << endl;
    } else {
        cout << "Invalid selection" << endl;
    }
    
    return result;

}


int main()
{
    getForm();
}
