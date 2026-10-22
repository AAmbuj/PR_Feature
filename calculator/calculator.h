#ifndef CALCULATOR_CALCULATOR_H
#define CALCULATOR_CALCULATOR_H

namespace calc {

class Calculator {
 public:
  double Add(double lhs, double rhs) const;
  double Subtract(double lhs, double rhs) const;
};

}  // namespace calc

#endif  // CALCULATOR_CALCULATOR_H
