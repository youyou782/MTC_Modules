#include "vector_strings.hpp"

#include <iostream>
#include <vector>

void Adder(std::vector<std::string>& names) {
    std::string name;
    std::cout << "Enter a name:"<< std::endl;
    std::cin >> name;
    names.push_back(name);
    std::cout << "Number of names in the vector:" << std::endl << names.size() << std::endl;
}

void Remover(std::vector<std::string>& names) {
    std::cout << "Removing the last element:"<< std::endl << names.back() << std::endl;
    names.pop_back();
}

void Printer(std::vector<std::string>& names) {
    for(unsigned int i =0; i < names.size(); i++){
        std::cout << names[i] << std::endl;
    }
}

void CMDReader() {
  std::vector<std::string> names;
  std::string input;
  std::cout << "Commands: ADD, PRINT, REMOVE, QUIT" << std::endl;
  
  while(1){
    std::cout << "Enter a command:" << std::endl;
    std::cin >> input;
    if (input == "ADD"){
        Adder(names);
    }
    else if(input == "PRINT"){
        Printer(names);
    }
    else if(input == "REMOVE"){
        Remover(names);
    }
    else if(input == "QUIT"){
        break;
    }
    else{
        std::cout << "Unrecognized" << std::endl;
    }
  }
}
