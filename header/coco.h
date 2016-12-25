//
// Created by 唐慧康 on 2016/12/23.
//

#ifndef CPP_COCO_H
#define CPP_COCO_H

#endif //CPP_COCO_H

#include <stdlib.h>
#include <iostream>
using namespace std;

class father{
private:
    int privateInt;
protected:
    int protectedInt;
public:
    int publicInt;

    father(){
        clog << "in father constructor!" << endl << endl;
        privateInt = 1;
        protectedInt = 2;
        publicInt = 3;
    }
};

class privateSon : private father{
public:
    privateSon(){
        clog << "in private son constructor:" << endl;
        cout << protectedInt << endl << publicInt << endl << endl;
    }
};

class protectedSon : protected father{
public:
    protectedSon(){
        clog << "in protected son constructor:" << endl;
        cout << protectedInt << endl << publicInt << endl << endl;
    }
};

class publicSon : public father{
public:
    publicSon(){
        clog << "in public son constructor:" << endl;
        cout << protectedInt << endl << publicInt << endl << endl;
    }
};