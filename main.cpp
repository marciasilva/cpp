#include <iostream>
using namespace std;


class Vector {
    private:
        int learn[10];

    public:
        int capacity() {
            return sizeof(learn);
        } 

        int at(int position) {
            return learn[position];
        }
};



int main (int argc, char *_argv[])
{
    cout << "Hallo" << endl;

    Vector myVector;
    cout << myVector.capacity() << endl;
    cout << myVector.at(0) << endl;

    return 0;
}