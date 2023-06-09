#include <iostream>
#include "PostfixCalculator.h"


int main() {
  PostfixCalculator calculator;
  std::string expression;
  double result;

  std::cout << "Please, enter the expression to calculate: "
            << std::endl;
  std::getline(std::cin, expression);  // read  input

  while (expression != "exit") {
    try {
      result = calculator.calculate(expression);
      std::cout << "Result: " << result << std::endl;
    } catch (std::runtime_error &e) {
      std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout
        << "Enter 'exit' or enter another expression: "
        << std::endl;
    std::getline(std::cin, expression);  // read input
  }

  return 0;
}