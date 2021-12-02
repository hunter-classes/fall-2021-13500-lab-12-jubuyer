#include <iostream>
#include <vector>

#include "vectors.h"

int main(int argc, char const *argv[]) {
  //Task A
  std::cout << "\x1B[31mTest for makeVector [TASK A]\n\033[0m";
  std::vector<int> vect1 = makeVector(5);
  std::vector<int> vect2 = makeVector(-5);

  for(int i = 0; i < vect1.size(); i++) {
    std::cout << i << '\t';
  }
  std::cout << "\n";
  for(int i = 0; i < vect2.size(); i++) {
    std::cout << i << '\t';
  }
  //Task B
 	std::cout << "\n\x1B[31mTest for optimism [TASK B]\n\033[0m";

  //Task C
 	std::cout << "\n\x1B[31mTests for fusion [TASK C]\n\033[0m";

  //Task D
  std::cout << "\n\x1B[31mTests for pairwise [TASK D]\n\033[0m";

	return 0;
}
