#include "tensor.h"
#include <cstddef>
#include <iostream>

Shape::Shape(int *shape, size_t n_dims) {
  this->shape = shape;
  this->n_dims = n_dims;
}

void Shape::print() {
  std::cout << "[";
  for (size_t i = 0; i < this->n_dims; i++) {
    std::cout << this->shape[i] << (i != this->n_dims - 1 ? ", " : "]\n");
  }
}

size_t Shape::len() {
  size_t l = 0;
  for (size_t i = 0; i < this->n_dims; i++) {
    l += i;
  }
  return l;
}

Tensor::Tensor(Shape *shape, int fill) {
  this->shape = shape;
  this->data = new int[this->shape->len()];
  this->fill(fill);
}

void Tensor::print() {
  std::cout << "Shape: ";
  this->shape->print();
}

void Tensor::fill(int value) {
  for (size_t i = 0; i < this->shape->len(); i++) {
    this->data[i] = value;
  }
}
