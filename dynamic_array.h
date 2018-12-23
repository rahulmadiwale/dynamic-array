//
// Created by rahul on 23/12/18.
//

#ifndef DYNAMIC_ARRAY_DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_DYNAMIC_ARRAY_H

#endif //DYNAMIC_ARRAY_DYNAMIC_ARRAY_H

template <class T>
class DynamicArray {

public:

    DynamicArray();
    ~DynamicArray();

    DynamicArray(const DynamicArray& obj);

    DynamicArray(DynamicArray&& other);

    T& operator=(const DynamicArray& obj);
    T& operator=(const DynamicArray&& other);
    T& operator[](unsigned int index);
    T& operator*();

    void push_back(const T& item);
    unsigned int size();
    void resize(unsigned int new_size);
    void clear();
    void remove(unsigned int pos);

private:
    T* array;
    unsigned int num_items;
    unsigned int actual_size;
    const static int size_step = 64;
    const static int size_multiplier = 2;
};