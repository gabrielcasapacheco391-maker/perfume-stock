#include "Stock.h"
#include <iostream>
Stock::Stock()
{
    //ctor
}

Stock::~Stock()
{
    //dtor
}

void Stock::addPerfume(Perfume p){


perfumes.push_back(p);


}


void Stock::showInfo(){


for(Perfume p: perfumes){


p.showInfo();
}

 std::cout << getTotalValue()<<std::endl;

}
double Stock::getTotalValue()
{
   double total=0;
   for(Perfume p : perfumes)
{
  total+=p.getPrice();

}

return total;
}
