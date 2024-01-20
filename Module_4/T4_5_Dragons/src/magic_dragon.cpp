#include "magic_dragon.hpp"

// Define MagicDragon's methods here
void MagicDragon::Eat(std::list<Food> &food)
{
   if(!food.empty()){
        for(auto i = food.begin(); i != food.end(); i++){
            if(i->type == Herbs){
                std::cout << "Magic dragon ate: " << i->name << std::endl;
                i = food.erase(i);
                size_ += 1;
                break;
            }
        }
   } 
}

void MagicDragon::Hoard(std::list<Treasure> &treasure)
{
    if(!treasure.empty()){
        for(auto i = treasure.begin(); i != treasure.end(); i++){
            if(i->type == Potions){
                std::cout << "Magic dragon received: " << i->name << std::endl;
                treasure_.push_back(*i);
                i = treasure.erase(i);
                break;
            }
        }
    }

}