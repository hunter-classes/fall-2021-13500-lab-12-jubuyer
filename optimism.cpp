#include <iostream>
#include <vector>

#include "optimism.h"

std::vector<int> goodVibes(const std::vector<int>&v) {
  std::vector<int> vect;
  for(int i = 0; i < v.size(); i++) {
    if(v[i] > 0) {
      vect.push_back (v[i]);
    }
  }

  return vect;
}
