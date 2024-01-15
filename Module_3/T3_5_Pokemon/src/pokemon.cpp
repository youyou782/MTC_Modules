#include "pokemon.hpp"
#include <algorithm>

void PokemonCollection::Add(const std::string &name, size_t id){
    std::pair<std::string, std::size_t> new_pokemon = std::pair<std::string, std::size_t>(name, id);
    pokemons_.push_back(new_pokemon);
}

bool PokemonCollection::Remove(const std::string &name, size_t id){
    std::pair<std::string, std::size_t> delete_pokemon = std::pair<std::string, std::size_t>(name, id);
    auto it = std::find(pokemons_.begin(), pokemons_.end(), delete_pokemon);
    if(it != pokemons_.end()){
        pokemons_.erase(it);
        return true;
    }
    return false;
}
void PokemonCollection::Print() const{
    for(auto i = pokemons_.cbegin(); i != pokemons_.cend(); i++){
        std::cout << "id: " << i->second << ", name: " << i->first << std::endl;
    }
}

bool compare_id(const std::pair<std::string, std::size_t>& a, const std::pair<std::string, std::size_t>& b){
    if(a.second == b.second){
        return (a.first < b.first);
    }
    else{
        return (a.second < b.second);
    }
}

bool compare_name(const std::pair<std::string, std::size_t>& a, const std::pair<std::string, std::size_t>& b){
    if(a.first == b.first){
        return (a.second < b.second);
    }
    else{
        return (a.first < b.first);
    }
}

void PokemonCollection::SortByName(){
    pokemons_.sort(compare_name);
}

void PokemonCollection::SortById(){
    pokemons_.sort(compare_id);
}

PokemonCollection::PokemonCollection(PokemonCollection collection, PokemonCollection collection2){
    auto i = collection.pokemons_.begin();
    collection.pokemons_.splice(i, collection2.pokemons_);
    collection.SortByName();
    collection.pokemons_.unique();
    pokemons_ = collection.pokemons_;
}