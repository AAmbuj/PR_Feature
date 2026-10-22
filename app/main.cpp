#include <cstdlib>
#include <exception>
#include <iostream>
#include <string>

#include "calculator/calculator.h"

namespace {

int PrintUsage(const char* program) {
  std::cerr << "Usage: " << program << " <lhs> <op> <rhs>\n"
            << "  op: + - x / ^ %\n";
  return EXIT_FAILURE;
}

}  // namespace

int main(int argc, char* argv[]) {
  if (argc != 4) {
    return PrintUsage(argv[0]);
  }

  try {
    const double lhs = std::stod(argv[1]);
    const std::string op = argv[2];
    const double rhs = std::stod(argv[3]);
    const calc::Calculator calculator;

    double result = 0.0;
    if (op == "+") {
      result = calculator.Add(lhs, rhs);
    } else if (op == "-") {
      result = calculator.Subtract(lhs, rhs);
    } else if (op == "x" || op == "*") {
      result = calculator.Multiply(lhs, rhs);
    } else if (op == "/") {
      result = calculator.Divide(lhs, rhs);
    } else if (op == "^") {
      result = calculator.Power(lhs, rhs);
    } else if (op == "%") {
      result = calculator.Modulo(lhs, rhs);
    } else {
      return PrintUsage(argv[0]);
    }
    std::cout << result << '\n';
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << '\n';
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
