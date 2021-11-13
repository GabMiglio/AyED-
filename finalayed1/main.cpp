#include <iostream>
#include <cmath>
#include "figuras.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

   float l, r;
   Figura *figuras[10];

   cout << "Entre el lado del cuadrado" << endl;
   cin >> l;

   cout << "Entre el radio del c�rculo" << endl;
   cin >> r;

   figuras[0] = new Cuadrado(l);
   figuras[1] = new Circulo(r);

   for(int i = 0; i < 2; i++){
       cout << "El per�metro de la figura " << i+1 <<
              ", es: " << figuras[i]->Perimetro() << endl;
       cout << "El �rea de la figura" << i+1 <<
               ", es: " << figuras[i]->Area() << endl;
       }
}
