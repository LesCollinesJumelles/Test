#include <gtest/gtest.h>
#include "class.hpp"

#define START_CAPTURE_OUT testing::internal::CaptureStdout()
#define START_CAPTURE_ERR testing::internal::CaptureStderr()
#define GET_CAPTURE_OUT testing::internal::GetCapturedStdout()
#define GET_CAPTURE_ERR testing::internal::GetCapturedStderr()

TEST(test, basic) {
  mine::Test test("Bonjour", 10);
  EXPECT_STREQ("Bonjour", test.getStr().c_str());
  EXPECT_EQ(10, test.getNbr());
  START_CAPTURE_OUT;
  test.aff();
  EXPECT_STREQ("string: Bonjour\nnbr: 10\n", GET_CAPTURE_OUT.c_str());
}

TEST(test, empty) {
  mine::Test test("", 0);
  EXPECT_EQ(0, test.getNbr());
  EXPECT_STREQ("", test.getStr().c_str());
  START_CAPTURE_OUT;
  test.aff();
  EXPECT_STREQ("string: \nnbr: 0\n", GET_CAPTURE_OUT.c_str());
}

int		main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
