#include "Vector.h"
#include <iostream>

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

void Vector::insert(int pos, int value){
    if(m_size < pos) {
        throw "Invalid position";
    } else {
        m_data[pos] = value;
        m_size ++;
    }
}

ostream& operator<<(ostream &output, const Vector &my_vector){
    output << "[";
    for(int i = 0; i < my_vector.m_size; i++) {
        output << my_vector.at(i);
        if ( i != my_vector.m_size - 1) {
            output << ",";
        }
    }
    output << "]\n";

    return output;
}