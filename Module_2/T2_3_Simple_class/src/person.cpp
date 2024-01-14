#include "person.hpp"

// define your Person class' functions here

Person::Person(std::string name, int birthday)
    : Name(name), birthday(birthday){ }

std::string Person::GetName(){
    return Name;
}

int Person::GetAge(int year){
    return year - birthday;
}