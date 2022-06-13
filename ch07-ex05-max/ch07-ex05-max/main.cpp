//
//  main.cpp
//  ch07-ex05-max
//
//  Created by SIH-YU YAO on 2022/6/13.
//
/*
 Find the maximum
 Input: 3 numbers
 Output: the max one
 */
#include <iostream>

using namespace::std;

int main(void) {
    int i, max=0;
    int numbers[3];
    for (i=0; i<3; i++) {
        cin >> numbers[i];
    }
    
    for (i=0; i<3; i++) {
        if (max < numbers[i]) {
            max = numbers[i];
        }
    }
    
    cout << "Max : " << max << endl;
    return 0;
}
