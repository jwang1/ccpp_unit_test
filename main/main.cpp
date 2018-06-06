#include <iostream>

#include "bar.h"
#include "foo.h"

int main() {
  std::cout << "Hello, World!" << std::endl;

  Bar bar;

  Foo foo(bar);

  foo.baz(true);

  foo.baz(false);

  return 0;
}