#ifndef FIGURAS_H_INCLUDED
#define FIGURAS_H_INCLUDED

class Figura{
  protected:
  float x;
  public: Figura ();
  virtual float Perimetro();
  virtual float Area();
};

class Circulo: public Figura{
public : Circulo();
float Perimetro();
float Area();
};

class Cuadrado: public Figura{
public :Cuadrado();
float Perimetro();
float Area();
};
#endif // FIGURAS_H_INCLUDED


