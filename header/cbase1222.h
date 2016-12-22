//
// Created by 唐慧康 on 2016/12/22.
//

#ifndef CPP_CBASE1222_H
#define CPP_CBASE1222_H

#endif //CPP_CBASE1222_H

#include <iostream>
using namespace std;


int add(int a, int b){
    return a + b;
}

void output(){
    //    int integer(8);
//
//    cin >> hex >> integer;
//    cout << oct << integer << endl;
//    cout << dec << integer << endl;
//    cout << hex << integer << endl;
//
//    bool isTrue(false);
//    cin >> boolalpha >> isTrue;
//    cout << isTrue << endl;
//    cout << boolalpha << isTrue << endl;
//
//    cin >> integer;
//    cout << oct << integer << endl;
//    cout << dec << integer << endl;
//    cout << hex << integer << endl;

    int a(9), b(13);
    cout << add(b, b) << endl;
    clog << add(a, b) << endl;
    cerr << add(a, a) << endl;
}

