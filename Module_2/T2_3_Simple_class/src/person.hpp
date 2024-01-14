#ifndef AALTO_ELEC_CPP_PERSON
#define AALTO_ELEC_CPP_PERSON

// declare your Person class here
#include <string>
class Person{
    private:
        std::string  Name;
        int birthday;
    public:
        Person(std::string name, int birthday);
        std::string GetName();
        int GetAge(int year);
};

#endif