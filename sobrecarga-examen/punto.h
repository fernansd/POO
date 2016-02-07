#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>
using namespace std;
class Punto {
private:
  int x_;
  int y_;

public:
  Punto(int x, int y): x_(x), y_(y){};
  int getX() { return x_; }
  int getY() { return y_; }
  void setX(int x) { x_ = x; }
  void setY(int y) { y_ = y; }
  friend Punto operator+(Punto &p, int num);
  friend Punto operator+(int num, Punto &p);
  Punto operator+(const Punto &p);
  Punto operator++(void);
  Punto operator++(int);
  friend ostream &operator<<(ostream &stream, const Punto &p);
  friend istream &operator>>(istream &stream, Punto &p);

};


#endif
