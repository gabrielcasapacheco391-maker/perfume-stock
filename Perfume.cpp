#include "Perfume.h"
#include <iostream>
#include <iomanip>
Perfume::Perfume(std::string n,std::string b, double p, double m)
{
    this->ml=m;
    this->name=n;
    this->brand=b;
    this->price=p;

}

Perfume::~Perfume()
{
    //dtor
}

void Perfume::showInfo(){



std::cout << "=====  PERFUME ========== " <<std::endl;
std::cout << "NAME: " << name <<std::endl;
std::cout << "BRAND: " << brand <<std::endl;
std::cout << "VOLUME: " << ml <<std::endl;
std::cout << "PRICE: " << std::fixed << std::setprecision(2) << price << std::endl;


}
