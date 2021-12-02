#include <iostream>
#include <vector>

#include "pairwise.h"

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2) {
  std::vector<int> vect1 (v1);
  std::vector<int> vect2 (v2);
  std::vector<int> output;

  if(vect1.size() > vect2.size()) {
    for(int i = 0; i < vect1.size()-vect2.size(); i++) {
      vect2.push_back(0);
    }
  } else if (vect2.size() > vect1.size()) {
      for(int j = 0; j < vect2.size()-vect1.size(); j++) {
        vect1.push_back(0);
    }
  }

  for(int k = 0; k < vect1.size(); k++) {
    output.push_back(vect1[k]+vect2[k]);
  }

  return output;
}
