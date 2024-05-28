#include "tensor.h"

int main() {
  int* s = new int[]{1, 2, 3};
  Shape *shape = new Shape(s, 3);
  Tensor t(shape);
  t.print();

  return 0;
}
