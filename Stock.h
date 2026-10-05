#ifndef STOCK_H
#define STOCK_H

#include "Perfume.h"
#include <vector>
class Stock
{
    public:

        Stock();

         ~Stock();
   void addPerfume(Perfume p);
    void showInfo();
double getTotalValue();
    private:
        std::vector<Perfume> perfumes;
};

#endif // STOCK_H
