#include <iostream>
#include <string>

#include "mylib.h"

int main(int argc, char** argv) {
  if (argc < 2) {
    std::cerr << "ERROR: two numbers must be specified" << std::endl;
    return 2;
  }

  const int n1 = std::stoi(argv[1]);
  const int n2 = std::stoi(argv[2]);
  std::cout << "add(" << n1 << ", " << n2 << ") returns "
    << add(n1, n2) << std::endl;
}
