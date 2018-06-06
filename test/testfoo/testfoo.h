//
// Created by JWang on 6/5/18.
//

#ifndef GMOCK_CMAKE_TESTFOO_H
#define GMOCK_CMAKE_TESTFOO_H

#include "gtest/gtest.h"
#include "mockbar.h"

// fixture for testing class Foo
class FooTest : public ::testing::Test {
protected:
  // set-up
  FooTest();

  // clean-up
  virtual ~FooTest();

  // if ctor and dtor not enough for setting up
  // and cleaning up each test, we can define the following methods

  // called immediately after ctor, before each test
  virtual void SetUp();

  // called immediately after each test, before dtor
  virtual void TearDown();

  // mock bar lib shared by all tests
  MockBar m_bar;

};



#endif //GMOCK_CMAKE_TESTFOO_H
