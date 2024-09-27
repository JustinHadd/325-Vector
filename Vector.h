/**
 * @file Vector.h
 * @author Justin Haddock
 * @date 2024-09-27
 * @brief Vector class header file
 * 
 * This header file contains the definition of the Vector class as used in this program
 */

#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>


/**
 * The Vector class allows for a vector object to be created, that has dynamic memory.
 *
 * @class Vector Vector.h "325-Vector/Vector.h"
 * @brief An array with dynamic memory
 *
 */
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
