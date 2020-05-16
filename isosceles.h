#include <iostream>
#include <cmath>

using namespace std;

class triangulo {
private:
  float a;
  float b;
public:
  triangulo(float, float);
  void area();
  void perimetro();
};

triangulo::triangulo(float _a, float _b){
  a = _a;
  b = _b;
}

void triangulo::area(){
  //_area = (b * sqrt(((_a*a) - (b*b)) / 4)) / 2;
  float h, ar;
  h = sqrt((a*a)-((b*b)/4));
  ar = (b*h)/2;
  cout << "Area es igual a: " << ar << endl;
}

void triangulo::perimetro(){
  float pe;
  pe = a*2 + b;
  cout << "Perimetro es igual a: " << pe << endl;
}
