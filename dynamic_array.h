//
// Created by rahul on 23/12/18.
//

#include <cstdlib>
#include <new>
#include <iostream>

#ifndef DYNAMIC_ARRAY_DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_DYNAMIC_ARRAY_H

#endif //DYNAMIC_ARRAY_DYNAMIC_ARRAY_H

template <class T>
class DynamicArray {

public:

    DynamicArray();
    ~DynamicArray();

    DynamicArray(const DynamicArray& obj);

//    DynamicArray(DynamicArray&& other);
//
//    T& operator=(const DynamicArray& obj);
//    T& operator=(const DynamicArray&& other);
//    T& operator[](unsigned int index);
//    T& operator*();
//
//    void push_back(const T& item);
//    unsigned int size();
//    void resize(unsigned int new_size);
//    void clear();
//    void remove(unsigned int pos);

private:
    T* array;
    unsigned int num_items;
    unsigned int actual_size;
    const static int size_step = 64;
    const static int size_multiplier = 2;
};


template <class T>
DynamicArray<T>::DynamicArray() {
    actual_size = size_step;
    num_items = 0;
    try {
        array = new T[actual_size];
    }
    catch(std::bad_alloc& ba) {
        std::cerr << "bad_alloc caught:" << ba.what() << '\n';
    }
}

template <class T>
DynamicArray<T>::~DynamicArray() {
    if(array) {
        delete [] array;
    }
}

template <class T>
DynamicArray<T>::DynamicArray(const DynamicArray& obj) {
    try {
        array = new T[obj.actual_size];
    }
    catch(std::bad_alloc& ba) {
        std::cerr << "bad_alloc caught:" << ba.what() << '\n';
    }
    std::copy(obj.array, obj.array + 5, array);
    actual_size = obj.actual_size;
    num_items = obj.num_items;
}

