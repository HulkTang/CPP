#include <iostream>
#include <stdlib.h>
#include "header/cbase1222.h"
#include "header/coco.h"
using namespace std;

int main() {
    father* father1 = new father();
    privateSon* pris = new privateSon();
    protectedSon* pros = new protectedSon();
    publicSon* pubs = new publicSon();
    clog << "in main function:" << endl;
    cout << "private:" << endl;
    cout << "protected:" << endl;
    cout << "public:" << pubs->publicInt << endl;
    return 0;
}