#include "vector_it.hpp"

#include <iostream>
#include <vector>

// Implement the functions here

std::vector<int> ReadVector() {
  std::vector<int> v;
  int number;
  while(std::cin >> number){
    v.push_back(number);
  }
  return v;
}

void PrintSum1(const std::vector<int>& v) {
  std::vector<int> sum1;
  for(std::vector<int>::const_iterator i = v.begin(); i != v.end() - 1; i++){
    sum1.push_back(*i + *(i+1));
    std::cout << *i + *(i+1) << " ";
  }
  std::cout << std::endl;
}
void PrintSum2(const std::vector<int>& v) {
  std::vector<int> sum2;
  for(std::vector<int>::const_iterator i = v.begin(), j = v.end() - 1; i < j ; i++, j--){
    sum2.push_back(*i + *j);
    std::cout << *i + *j << ' ';
  }
  std::cout<< std::endl;
}
