// Joseph Geiger
// josgeig@csu.fullerton.edu
// @SirBagelton
// Partners:@brandont118, @pachmi

#include <iostream>
#include <string>
#include <vector>

#include "blackjack_functions.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);

  // Validate that the number of arguments is correct.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() != 3) {
    std::cout << "error: you must supply two arguments\n";
    return 1;
  }
  // declare a variable to hold the first card name, and initialize
  // the variable with the first command line argument
  std::string first{arguments.at(1)};
  // declare a variable to hold the second card name, and initialize
  // the variable with the second command line argument
  std::string second{arguments.at(2)};
  // if either card name is not valid, print out an error message and
  // return a non-zero value.
  if (!IsCardName(first) || !IsCardName(second)) {
    std::cout << "error: invalid card name";
    return 1;
  }
  // declare a variable to hold the total score, and initialize
  // the variable with the result of calling the TwoHandScore function
  int total{TwoCardHandScore(first, second)};
  // write a cout statement that prints the total score on its own line
  std::cout << total;
  return 0;
}
