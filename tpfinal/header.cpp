#include <iostream>
#include <string>
using namespace std;

#include "zoopark.h"

void Animal::setName()
{
    cout << "Ingrese el nombre del animal: ";
    getline(cin, name);
}

void Animal::getName()
{
    cout << name;
}

void Animal::setCode (int _code)
{
    code = _code;
}

void Animal::getType()
{
    if (code == 1)
    {
        cout << "Tipo de animal: Cocodrilo" << endl;
    }
    else
    {
        if (code == 2)
        {
            cout << "Tipo de animal: Ganso" << endl;
        }
         else
         {
             if (code == 3)
             {
                 cout << "Tipo de animal: Pelicano" << endl;
             }
             else
             {
                 if (code == 4)
                 {
                     cout << "Tipo de animal: Murcielago" << endl;
                 }
                 else
                 {
                     if (code == 5)
                     {
                         cout << "Tipo de animal: Ballena" << endl;
                     }
                     else
                     {
                         if (code == 6)
                         {
                             cout << "Tipo de animal: Leon Marino" << endl;
                         }
                     }
                 }
             }
         }
    }
}

void Animal::Breed()
{
    if((1<=code)&&(code<=3))
    {
        Oviparous*oviparous;
        oviparous-> layEggs();
    }
    else
    {
        if((4<=code)&&(code<=6))
        {
            Mammal*mammal;
            mammal-> nurse();
        }
    }
}

void Oviparous::layEggs()
{
    cout << "Puso un huevo" << endl;
}
void Mammal::nurse()
{
    cout << "Esta preniada" << endl;
}

Crocodile::Crocodile()
{}

Crocodile::~Crocodile()
{}

void Crocodile::eat()
{
    cout << "El cocodrilo esta comiendo" << endl;
}
void Crocodile::sleep()
{
    cout << "El cocodrilo esta durmiendo" << endl;
}

Goose::Goose()
{}

Goose::~Goose()
{}

void Goose::eat()
{
    cout << "El ganso esta comiendo" << endl;
}
void Goose::sleep()
{
    cout << "El ganso esta durmiendo" << endl;
}

Pelican::Pelican()
{}

Pelican::~Pelican()
{}

void Pelican::eat()
{
    cout << "El pelicano esta comiendo" << endl;
}
void Pelican::sleep()
{
    cout << "El pelicano esta durmiendo" << endl;
}

Bat::Bat()
{}

Bat::~Bat()
{}

void Bat::eat()
{
    cout << "El murcielago esta comiendo" << endl;
}
void Bat::sleep()
{
    cout << "El murcielago esta durmiendo" << endl;
}

Whale::Whale()
{}

Whale::~Whale()
{}

void Whale::eat()
{
    cout << "La ballena esta comiendo" << endl;
}
void Whale::sleep()
{
    cout << "La ballena esta durmiendo" << endl;
}

SeaLion::SeaLion()
{}

SeaLion::~SeaLion()
{}

void SeaLion::eat()
{
    cout << "El leon marino esta comiendo" << endl;
}
void SeaLion::sleep()
{
    cout << "El leon marino esta durmiendo" << endl;
}
