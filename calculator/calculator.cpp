#include "calculator/calculator.h"

#include <cmath>
#include <stdexcept>

namespace calc {

double Calculator::Add(double lhs, double rhs) const { return lhs + rhs; }

double Calculator::Subtract(double lhs, double rhs) const { return lhs - rhs; }

double Calculator::Multiply(double lhs, double rhs) const { return lhs * rhs; }

double Calculator::Divide(double lhs, double rhs) const {
  if (rhs == 0.0) {
    throw std::invalid_argument("division by zero");
  }
  return lhs / rhs;
}

double Calculator::Power(double base, double exponent) const {
  return std::pow(base, exponent);
}

double Calculator::Modulo(double lhs, double rhs) const {
  if (rhs == 0.0) {
    throw std::invalid_argument("modulo by zero");
  }
  return std::fmod(lhs, rhs);
}

}  // namespace calc
