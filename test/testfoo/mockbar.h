//
// Created by JWang on 6/5/18.
//

#ifndef GMOCK_CMAKE_MOCKBAR_H
#define GMOCK_CMAKE_MOCKBAR_H

#include "gmock/gmock.h"
#include "ibar.h"

class MockBar: public IBar {
public:
  MOCK_METHOD0(qux, bool());
  MOCK_METHOD0(norf, bool());
};

#endif //GMOCK_CMAKE_MOCKBAR_H
