/*----------------------------------
 *
 * Laboratorio: POO y C++
 * Fecha: 15-05-2020
 * Autor: A01706219 Rodrigo Marquina Magaña
 *
 *----------------------------------*/

#include <iostream>
#include "isosceles.h"

using namespace std;

int main(){

  int a, b;

  cout << "Lado A: " << endl;
  cin >> a;
  cout << "Lado B: " << endl;
  cin >> b;

  triangulo isosceles(a,b);

  isosceles.perimetro();
  isosceles.area();

  return 0;
}
