#pragma once

#include <cstddef>

class Shape {
  int *shape;
  size_t n_dims;

public:
  Shape(int *shape, size_t n_dims);
  void print();
  size_t len();
};

class Tensor {
  int *data;
  Shape *shape;

public:
  Tensor(Shape *shape);
  void print();
};
