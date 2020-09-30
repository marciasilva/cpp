#include "Vector.h"

#include <iostream>

using namespace std;

int main (int argc, char *_argv[])
{
    int value = 7;
    cout << "Hallo" << endl;

    Vector myVector;
    cout << myVector.capacity() << endl;
    myVector.push_back(7);
    cout << myVector.size() << endl;
    cout << myVector.at(0) << endl;
    cout << myVector[0] << endl;
    myVector[1] = value;
    return 0;
}