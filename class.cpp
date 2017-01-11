#include <iostream>
#include "class.hpp"

namespace mine {
  Test::Test(std::string const &string, int nbr) {
    _string = string;
    _nbr = nbr;
  }

  int Test::getNbr() {
    return _nbr;
  }

  std::string Test::getStr() {
    return _string;
  }

  void Test::aff() {
    std::cout << "string: " << _string << std::endl;
    std::cout << "nbr: " << _nbr << std::endl;
  }
}
