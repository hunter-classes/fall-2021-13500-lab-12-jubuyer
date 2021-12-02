#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "vectors.h"
#include "optimism.h"
#include "fusion.h"
#include "pairwise.h"
#include "doctest.h"

TEST_CASE("TASK A TESTS") {
  SUBCASE("Regular") {
    std::vector<int> v1 = makeVector(5);
    std::vector<int> v2{0,1,2,3,4};
    std::vector<int> v3 = makeVector(10);
    std::vector<int> v4{0,1,2,3,4,5,6,7,8,9};

    for (int i = 0;i < v1.size();i++) {
      CHECK(v1[i]==v2[i]);
    }
    for (int j = 0; j < v3.size();j++) {
      CHECK(v3[j]==v4[j]);
    }
  }
  SUBCASE("Parameter Testing") {
    std::vector<int> v5 = makeVector(-10);
    std::vector<int> v6{0};
    std::vector<int> v7= makeVector(-10124123);
    std::vector<int> v8{0};

    for (int k = 0;k < v5.size();k++) {
      CHECK(v5[k]==v6[k]);
    }
    for (int l = 0; l < v7.size();l++) {
      CHECK(v7[l]==v8[l]);
    }
  }
}

TEST_CASE("TASK B TESTS") {
  std::vector<int> v9 {1,2,-1,3,4,-1,6};
  std::vector<int> v10 (goodVibes(v9)); // returns [1,2,3,4,6]
  int arr1[] = {1,2,3,4,6};
  std::vector<int> v11 {52,2,-1,3,-12312,0,1232,4,-1,6,4};
  std::vector<int> v12 (goodVibes(v11)); // returns [52,2,3,1232,4,6,4]
  int arr2[] = {52,2,3,1232,4,6,4};

  for (int m = 0;m < v10.size();m++) {
    CHECK(v10[m]==arr1[m]);
  }
  for (int n = 0; n < v12.size();n++) {
    CHECK(v12[n]==arr2[n]);
  }

}

TEST_CASE("TASK C TESTS") {

}

TEST_CASE("TASK D TESTS") {

}
