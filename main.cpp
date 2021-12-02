#include <iostream>
#include <vector>

#include "vectors.h"
#include "optimism.h"
#include "fusion.h"

int main(int argc, char const *argv[]) {
  //Task A
  std::cout << "\x1B[31mTest for makeVector [TASK A]\n\033[0m";
  std::vector<int> vect1 = makeVector(5);
  std::vector<int> vect2 = makeVector(-5);

  for(int i = 0; i < vect1.size(); i++) {
    std::cout << vect1[i] << '\t';
  }
  std::cout << "\n";
  for(int j = 0; j < vect2.size(); j++) {
    std::cout << vect2[j] << '\t';
  }
  //Task B
 	std::cout << "\n\x1B[31mTest for optimism [TASK B]\n\033[0m";
  std::vector<int> vect3 {1,2,-1,3,4,-1,6};
  std::vector<int> vect4 (goodVibes(vect3)); // returns [1,2,3,4,6]
  for(int k = 0; k < vect4.size(); k++) {
    std::cout << vect4[k] << '\t';
  }
  //Task C
 	std::cout << "\n\x1B[31mTests for fusion [TASK C]\n\033[0m";
  std::vector<int> v1{1,2,3};
  std::vector<int> v2{4,5};

  gogeta(v1, v2); // v1 is now [1,2,3,4,5] and v2 is empty.

  for(int l = 0; l < v1.size(); l++) {
    std::cout << v1[l] << '\t';
  }
  for(int m = 0; m < v2.size(); m++) {
    std::cout << v2[m] << '\t';
  }

  //Task D
  std::cout << "\n\x1B[31mTests for pairwise [TASK D]\n\033[0m";

	return 0;
}
