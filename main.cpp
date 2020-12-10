/**
 * @file main.cpp
 * @author H. Cole Wiley
 * @brief Example cpp binary for showing how vs code debugging works
 * @version 0.1
 * @date 2020-12-10
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "library.h"

#include <iostream>

void
otherFunction(int y)
{
  std::cout << "y is:" << y << std::endl;
}

int
main(int argc, char** argv)
{
  // How many args did we get?
  std::cout << "Got n args:" << argc << std::endl;


  // Log all the args
  for (size_t i = 0; i < argc; i++) {
    std::cout << "arg[" << i << "]:\t" << argv[i] << std::endl;
  }

  // Demo how functions work
  int x = 0;

  for (size_t i = 0; i < 10; i++) {
    x += i;
    otherFunction(x);
  }

  x *= 3;
  libraryFunction(x);

  return 0;
}