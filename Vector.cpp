#include "Vector.h"

using namespace std;

Vector::Vector() {}

Vector::~Vector() {}

int Vector::capacity() const{
    return 10;
} 

int Vector::size() {
    return m_size;
}

void Vector::push_back(int value){
    //last postion length - 1
    if (m_size-1 < 10) {
        m_data[m_size-1] = value;
        m_size++;
    }
}

int Vector::operator[](int position){
    return m_data[position];
}

int Vector::at(int position){
    if (position < m_size) {
        return m_data[position];
    }
}

const int Vector::operator[] (int pos) const{
    return m_data[pos];
}