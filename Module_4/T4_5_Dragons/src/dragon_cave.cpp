#include "dragon_cave.hpp"


// Define DragonCave's methods here

DragonCave::~DragonCave(){
    for(auto i = dragon_.begin(); i != dragon_.end(); i++){
        delete *i;
    }
}

const std::list<Dragon *> &DragonCave::GetDragons() const
{
    return dragon_;
}

void DragonCave::Accommodate(Dragon *dragon)
{
    dragon_.push_back(dragon);
}

void DragonCave::Evict(const std::string &name)
{
    for(auto i = dragon_.begin(); i != dragon_.end(); i++){
        if( (*i)->GetName() == name){
            i = dragon_.erase(i);
            break;
        }
    }
}

std::ostream& operator<<(std::ostream& os, const DragonCave& cave){

    os << "DragonCave dwellers:" << std::endl;

    for(auto i : cave.GetDragons()){

        os << i->GetName() << std::endl;

    }
    return os;
}