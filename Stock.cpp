#include "Stock.h"
#include <iostream>


void Stock::addPerfume(Perfume p){


perfumes.push_back(p);


}


void Stock::showInfo(){

if (perfumes.empty()) {
   std::cout << "infelizmente tem perfume nenhum aqui"<<std::endl;
  return;
}
for(const Perfume& p : perfumes){


p.showInfo();
}

 std::cout << "Valor total do estoque:" << getTotalValue()<<std::endl;

}
double Stock::getTotalValue() const
{
   double total=0;
   for(const Perfume& p: perfumes)
{
  total+=p.getPrice();

}

return total;
}
