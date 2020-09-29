#include "Vector.h"

using namespace std;

Vector::Vector() {}

Vector::~Vector() {}

int Vector::capacity() const{
    return 10;
} 

int Vector::at(int position) const {
    return m_data[position];
}