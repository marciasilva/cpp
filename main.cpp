#include "Vector.h"

#include <iostream>

using namespace std;

int main (int argc, char *_argv[])
{
    int value = 7;
    cout << "Hallo" << endl;

    Vector myVector;
    cout << myVector.capacity() << endl;
    myVector.push_back(0); //0
    cout << myVector.size() << endl;
    cout << myVector.at(0) << endl;
    cout << myVector[0] << endl;
    myVector.insert(1,1); //0,1
    cout << myVector << endl;
    
    myVector.insert(0,8); // 8,0,1
    cout << myVector << endl;

    myVector.insert(1,9); // 8,9,0,1
    
    cout << myVector << endl;

    myVector.insert(7,7); //exc

    return 0;
}