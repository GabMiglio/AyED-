#include <iostream>
#include <cmath>
#include "figuras.h"

void Figura(){

    class Figura{
  protected:
    float x;
  public:
    Figura(float cx=0){
       x = cx;
      }
  virtual float Perimetro() = 0;
  virtual float Area() = 0;
};

// Clases derivadas
class Circulo: public Figura{
   public:

   Circulo(float radio){
     x = radio;
   }
   float Perimetro(){
     return 2* 3.14 * x;
   }
   float Area(){
     return 3.14 * x * x;
   }
};

}
