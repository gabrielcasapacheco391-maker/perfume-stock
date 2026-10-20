#include "Perfume.h"
#include <iostream>
#include <iomanip>
Perfume::Perfume(std::string n,std::string b, double p, double m)  : ml(0), price(0)
{

this->setMl(m);
    this->name=n;
    this->brand=b;

    this->setPrice(p);

}


void Perfume::showInfo()const {



std::cout << "=====  PERFUME ========== " <<std::endl;
std::cout << "NAME: " << name <<std::endl;
std::cout << "BRAND: " << brand <<std::endl;
std::cout << "VOLUME: " <<std::fixed << std::setprecision(2) << ml << std::endl;
std::cout << "PRICE: " <<  price << std::endl;


}
