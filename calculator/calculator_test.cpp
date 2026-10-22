#include "calculator/calculator.h"

#include <stdexcept>

#include <gtest/gtest.h>

namespace calc {
namespace {

class CalculatorTest : public ::testing::Test {
 protected:
  Calculator calculator_;
};

TEST_F(CalculatorTest, AddReturnsSum) {
  EXPECT_DOUBLE_EQ(calculator_.Add(2.0, 3.0), 5.0);
  EXPECT_DOUBLE_EQ(calculator_.Add(-2.5, 2.5), 0.0);
}

TEST_F(CalculatorTest, SubtractReturnsDifference) {
  EXPECT_DOUBLE_EQ(calculator_.Subtract(5.0, 3.0), 2.0);
  EXPECT_DOUBLE_EQ(calculator_.Subtract(3.0, 5.0), -2.0);
}

TEST_F(CalculatorTest, MultiplyReturnsProduct) {
  EXPECT_DOUBLE_EQ(calculator_.Multiply(4.0, 2.5), 10.0);
  EXPECT_DOUBLE_EQ(calculator_.Multiply(-3.0, 0.0), 0.0);
}

TEST_F(CalculatorTest, DivideReturnsQuotient) {
  EXPECT_DOUBLE_EQ(calculator_.Divide(6.0, 3.0), 2.0);
  EXPECT_DOUBLE_EQ(calculator_.Divide(1.0, 4.0), 0.25);
}

TEST_F(CalculatorTest, DivideByZeroThrows) {
  EXPECT_THROW(calculator_.Divide(1.0, 0.0), std::invalid_argument);
}

}  // namespace
}  // namespace calc
