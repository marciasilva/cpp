#ifndef VECTOR_H
#define VECTOR_H

class Vector {
    private:
        int m_data[10];   
        int m_size{0};

     public:
        Vector();
        virtual ~Vector();
        int capacity() const;
        const int size();
        void push_back(int value);
        int& at(int position);    
        const int& at(int pos) const;
        int& operator[] (int pos);
        const int& operator[] (int pos) const;
};
#endif