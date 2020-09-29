#ifndef VECTOR_H
#define VECTOR_H

class Vector {
    private:
        int m_data[10];        
     public:
        Vector();
        virtual ~Vector();
        int capacity() const;
        int at(int position) const;    
        
};
#endif