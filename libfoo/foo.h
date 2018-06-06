//
// Created by JWang on 6/5/18.
//

#ifndef GMOCK_CMAKE_FOO_H
#define GMOCK_CMAKE_FOO_H

class IBar;

class Foo {
public:
  Foo(IBar& bar) ;

  bool baz(bool useQux);

protected:
  IBar& m_bar;

};


#endif //GMOCK_CMAKE_FOO_H
