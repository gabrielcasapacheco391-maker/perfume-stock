#include <iostream>
#include "Perfume.h"
#include "Stock.h"
using namespace std;

int main()
{
 Stock stock;
 Perfume p1("Gris chanel EXTRAIT 44","BDK parfums",7000.0,70);
 Perfume p2("Art of Nature 1","Lattafa",240.0,100);
stock.addPerfume(p1);
stock.addPerfume(p2);

stock.showInfo();
stock.getTotalValue();
    return 0;
}
