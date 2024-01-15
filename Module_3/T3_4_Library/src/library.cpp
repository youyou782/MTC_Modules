#include "library.hpp"

#include <iostream>

#include "book.hpp"
#include "customer.hpp"


Library::Library(const std::string& name): name_(name){
}

std::string Library::GetName() const{
    return name_;
}

std::vector<Book>& Library::GetBooks(){
    return book_;
}

std::vector<Customer>& Library::GetCustomers(){
    return customer_;
}

Book Library::FindBookByName(const std::string& name){

    for(auto i = book_.begin(); i != book_.end(); i++){
        if( name == i->GetName()){
            return *i;
        }
    }
    Book empty_book("","","");
    return empty_book;
}

std::vector<Book> Library::FindBooksByAuthor(const std::string& name){
    std::vector<Book> found_book;
    for( auto i = book_.begin(); i != book_.end(); i++){
        if(i->GetAuthor() == name){
            found_book.push_back(*i);
        }
    }
    return found_book;
}

std::vector<Book> Library::FindAllLoanedBooks(){
    std::vector<Book> found_book;
    for( auto i = book_.begin(); i != book_.end(); i++){
        if(i->GetStatus()){
            found_book.push_back(*i);
        }
    }
    return found_book;
}

Customer Library::FindCustomer(const std::string& id){

    for(auto i = customer_.begin(); i != customer_.end(); i++){
        if( id == i->GetID()){
            return *i;
        }
    }
    Customer empty_customer("","");
    return empty_customer;
}