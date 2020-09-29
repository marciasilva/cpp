#include "Vector.h"

#include <iostream>

using namespace std;

int main (int argc, char *_argv[])
{
    cout << "Hallo" << endl;

    Vector myVector;
    cout << myVector.capacity() << endl;
    cout << myVector.at(0) << endl;

    return 0;
}