#include "Vector.h"

using namespace std;

Vector::Vector() {}

Vector::~Vector() {}

int Vector::capacity() const{
    return 10;
} 

const int Vector::size() {
    return m_size;
}

void Vector::push_back(int value){
    if (m_size < 10) {
        m_data[m_size] = value;
        m_size++;
    }
}

int& Vector::operator[](int pos){
    return m_data[pos];
}

const int& Vector::operator[](int pos) const{
    return m_data[pos];
}

int& Vector::at(int position){
    return m_data[position];
}

const int& Vector::at(int pos) const{
    return m_data[pos];
}