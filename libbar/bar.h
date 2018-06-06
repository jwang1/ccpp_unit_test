//
// Created by JWang on 6/5/18.
//

#ifndef GMOCK_CMAKE_BAR_H
#define GMOCK_CMAKE_BAR_H

#include "ibar.h"

class Bar : public IBar {
public:
  virtual bool qux();
  virtual bool norf();
};


#endif //GMOCK_CMAKE_BAR_H
