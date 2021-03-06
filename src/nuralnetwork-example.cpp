#include <vector>
#include <iostream>
#include "nural-network/NuralNetwork.h"

int main() {
  NuralNetwork n({2,3,1});
  std::vector<double> output = n.predict({1, 1});
  for(double d:output){
    std::cout<<d<<std::endl;
  }
  return 0;
}
