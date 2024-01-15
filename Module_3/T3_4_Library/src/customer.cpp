#include "customer.hpp"
#include <iostream>


Customer::Customer(const std::string& name, const std::string& id):
    name_(name), id_(id){
    }

std::string Customer::GetName() const{
    return name_;
}

std::string Customer::GetID() const{
    return id_;
}

int Customer::GetLoanAmount() const{
    return book_.size();
}

std::vector<Book> Customer::GetLoans(){
    return book_;
}

bool Customer::LoanBook(Book& b){
    if(b.Loan()){
        book_.push_back(b);
        return true;
    }
    else{
        return false;
    }
    
}

void Customer::ReturnBook(Book& b){

    b.Restore();
    for(std::vector<Book>::iterator i = book_.begin(); i!= book_.end(); i++){
        if((*i).GetISBN() == b.GetISBN()){
            book_.erase(i);
            break;
        }
    }
}

void Customer::Print() const{
    std::cout << "Customer: " << name_ << ", " << id_ << ", has " << GetLoanAmount() <<  " books on loan:" << std::endl;

    for(std::vector<Book>::const_iterator i = book_.begin(); i!= book_.end(); i++){
        
        std::cout << "- Book: " << i->GetName() << ", author: " << i->GetAuthor() << ", ISBN: " <<
        i->GetISBN() << ", loaned " << (i->GetStatus() ? "true" : "false") << ", due date: " << i->GetDueDate().day <<
        "." << i->GetDueDate().month << "." << i->GetDueDate().year << std::endl; 
        
    }
}

