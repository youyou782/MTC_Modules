#include "geomvector.hpp"

// Implement operators here


GeomVector GeomVector::operator+(const GeomVector& a) {
    return GeomVector(a.x_ + x_, a.y_ + y_, a.z_ + z_);
}

GeomVector operator*(double a, const GeomVector& b) {
    return GeomVector(a * b.x_, a * b.y_, a * b.z_);
}

std::ostream &operator<<(std::ostream& out, const GeomVector& a) {
    out << "(" << a.x_ << ", " << a.y_ << ", " << a.z_ << ")";
    return out;
}

double GeomVector::Length() const {
    return sqrt(pow(x_, 2) + pow(y_, 2) + pow(z_, 2));
}

bool GeomVector::operator<(const GeomVector&a){
    return this->Length() < a.Length();
}

bool GeomVector::operator>(const GeomVector&a){
    return this->Length() > a.Length();
}

bool GeomVector::operator==(const GeomVector&a){
    return (x_ == a.x_ && y_ == a.y_ && z_ == a.z_);
}

bool GeomVector::operator!=(const GeomVector&a){
    return !(x_ == a.x_ && y_ == a.y_ && z_ == a.z_);
}

GeomVector operator/(const GeomVector&a, int b){
    GeomVector c = GeomVector(0,0,0);
    c.x_ = a.x_/b;
    c.y_ = a.y_/b;
    c.z_ = a.z_/b;
    return c;
}