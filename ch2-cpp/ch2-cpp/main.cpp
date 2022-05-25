//
//  main.cpp
//  ch2-cpp
//
//  Created by SIH-YU YAO on 2022/5/25.
//

#include <iostream> //cin, cout functions

// cin, cout都是定義在std命名空間中
// 使用using來宣告要使用的命名空間
using namespace std;

#define rate 0.0168

int main() {
    int num1, money;
    float f1;
    char c1;
    cout << "Input a Integer, a float, a character:";
    cin >> num1 >> f1 >> c1;
    cout << "Integer : " << num1 << endl;  //跳行
    cout << "Float : " << f1 << endl;  //跳行
    cout << "Character : " << c1 << endl;  //跳行
    
    // Money rate
    cout << "Input Money: ";
    cin >> money;
    cout << "Get : " << money * rate << endl;
    return 0;
}
