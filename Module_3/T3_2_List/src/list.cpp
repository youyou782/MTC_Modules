#include "list.hpp"

#include <iostream>

// Implement the functions here

std::istream& GetLines(std::istream& is, std::list<std::string>& list) {
    std::string temp;
    list.clear();
    while(std::getline(is, temp)){
        if(temp.back() == '\n'){
            temp.pop_back();
        }
        list.push_back(temp);
    }
    return is;
}

void Print(const std::list<std::string>& list) {
    for(std::list<std::string>::const_iterator i = list.begin(); i != list.end(); i++){
        std::cout << *i << std::endl;
    }
}

void SortAndUnique(std::list<std::string>& list) {
    list.sort();
    list.unique();

}