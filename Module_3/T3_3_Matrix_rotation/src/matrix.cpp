#include "matrix.hpp"

#include <iostream>
#include <vector>

// Implement the functions here
// Remember to use auto and ranged for-loops when they can be used!

// Assumes 'm' is a square matrix
Matrix ReadMatrix(int n) {
  std::vector<int> row;
  int number;
  Matrix matrix;
  for(int i=0; i < n * n; i++){
    std::cin >> number;
    
    row.push_back(number);
    if( (i + 1) % n == 0){
      matrix.push_back(row);
      row.clear();
    }
  }
  return matrix;
}

Matrix Rotate90Deg(const Matrix &m) {
  auto n = m.size();
  Matrix m2(n);
  for(auto& col : m2){
    col.reserve(n);
  }
  for(unsigned int i = 0; i < n; i++){
    for(unsigned int j = 0; j < n; j++){
      m2[j][n-1-i] = m[i][j];
    }
  }
  return m2;
}

void Print(const Matrix &m) {
  Matrix::size_type n;
  n = m.size();
  std::cout << "Printing out a " << n <<" x " << n << " matrix:"<< std::endl;
  for(unsigned int i = 0; i < n; i++){
    for(unsigned int j = 0; j < n; j++){
      std::cout << m[i][j]<< " ";
    }
    std::cout<< std::endl;
  }
}
