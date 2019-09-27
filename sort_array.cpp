//
//  sort_array.cpp
//  sort_array
//
//  Created by Warnock, Scott A on 9/27/19.
//  Copyright © 2019 Warnock, Scott A. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    size_t n = sizeof(array) / sizeof(array[0]);
    
    for(size_t i = 0; i < n; i ++) {
        cout << array [i] << ' ';
    }
    return 0;
}
