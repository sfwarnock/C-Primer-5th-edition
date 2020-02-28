//
//  Created by Warnock, Scott A on 2/28/20.
//  Copyright © 2020 Warnock, Scott A. All rights reserved.
//


#include<iostream>
using namespace std;

int square(int x){
    return x*x;
}

int squareOfSum(int x, int y){
    int z = square(x + y);
    return z;
}

int main(){
    int total;
    int a = 4, b = 8;
    total = squareOfSum(a,b);
    cout<< total << endl;
}
