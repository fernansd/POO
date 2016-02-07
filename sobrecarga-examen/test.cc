// test.cc : programa de ejemplo de la clase Punto
#include <iostream>
#include "punto.h"
using namespace std;
int main () {
  Punto p(3,5);
  p = p + 3;
  cout << p;
  p = 3 + p;
  cout << p;
  Punto aux(-3,-2);
  p = p + aux;
  cout << p;
  cin >> aux;
  cout << aux;
  cout << "Fin del programa" << endl;


  return 0;
}
