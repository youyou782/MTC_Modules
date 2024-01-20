#include "aviary.hpp"

void Aviary::Add(Bird *bird){
    if(!bird){
        throw std::logic_error("NULL bird");
    }
    else{
        bird_.push_back(bird);
    }
}

void Aviary::SpeakAll(std::ostream &os) const{

    for(auto i: bird_){
        i->Speak(os);
    }
}

size_t Aviary::Size() const{

    return bird_.size();
}

Bird *Aviary::operator[](size_t idx)
{
    if(idx < Size()){
        return bird_[idx];
    }
    else{
        throw std::out_of_range("index out of range");
    }
}

const Bird *Aviary::operator[](size_t idx) const
{
    if(idx < Size()){
        return bird_[idx];
    }
    else{
        throw std::out_of_range("index out of range");
    }
}

Aviary::~Aviary()
{
    for(auto i : bird_){
        delete i;
    }
}
