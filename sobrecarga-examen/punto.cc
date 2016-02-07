#include "punto.h"

Punto operator+(Punto &p, int num) {
  Punto aux(0,0);
  aux.setX(p.getX() + num);
  aux.setY(p.getY() + num);
  return aux;
}
Punto operator+(int num, Punto &p) {
  Punto aux(0,0);
  aux.setX(p.getX() + num);
  aux.setY(p.getY() + num);
  return aux;
}
Punto Punto::operator+(const Punto &p){
  Punto aux(0,0);
  aux.x_ = p.x_ + x_;
  aux.y_ = p.y_ + y_;
  return aux;
}
Punto Punto::operator++(void){
  Punto temp = *this;
  x_++;
  y_++;
  return temp;
}
Punto Punto::operator++(int){
  x_++;
  y_++;
  return *this;
}

ostream &operator<<(ostream &stream, const Punto &p) {
  stream << "x: ";
  stream << p.x_ << ", ";
  stream << "y: ";
  stream << p.y_ << endl;
  return stream;
}
istream &operator>>(istream &stream, Punto &p) {
  cout << "Introduce x: ";
  stream >> p.x_;
  cout << "Introduce y: ";
  stream >> p.y_;
  return stream;
}
