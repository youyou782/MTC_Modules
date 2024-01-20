#include "fantasy_dragon.hpp"

// Define FantasyDragon's methods here

void FantasyDragon::Eat(std::list<Food> &food)
{
   if(!food.empty()){
        for(auto i = food.begin(); i != food.end(); i++){
            if(i->type == People || i->type == PeopleFood){
                std::cout << "Fantasy dragon ate: " << i->name << std::endl;
                i = food.erase(i);
                size_ += 1;
                //break;
            }
        }
   } 
}

void FantasyDragon::Hoard(std::list<Treasure> &treasure)
{
    if(!treasure.empty()){
        for(auto i = treasure.begin(); i != treasure.end(); i++){
            if(i->type == Jewellery){
                std::cout << "Fantasy dragon received: " << i->name << std::endl;
                treasure_.push_back(*i);
                i = treasure.erase(i);
                //break;
            }
        }
    }

}
