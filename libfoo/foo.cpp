//
// Created by JWang on 6/5/18.
//

#include "foo.h"
#include "ibar.h"

Foo::Foo(IBar& bar)
  :m_bar(bar) {};

bool Foo::baz(bool useQux) {
  if (useQux) {
    return m_bar.qux();
  } else {
    return m_bar.norf();
  }
}
