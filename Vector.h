#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

class Vector {
private:
  int *vec_ptr; //Points to the vector's dynamic array
  int vec_size, vec_capacity; //Same as size and capacity for std::vector


 public:
  Vector();
  Vector(const Vector &other);
  ~Vector();
  Vector& operator=(const Vector &other);
 
  int size();
  int capacity();
  void push_back(int element);
  void reserve(int n);
  int& operator[](unsigned int index); 
};

#endif
