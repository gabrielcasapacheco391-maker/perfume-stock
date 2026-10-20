#ifndef PERFUME_H
#define PERFUME_H
#include <iostream>
#include <string>
class Perfume
{
    public:

        Perfume(std::string n,std::string b, double p, double m);



        double getMl()  const { return ml; }

        void setMl(double val) {
            if(val>0){
                ml = val;
            }else{
            std::cout << "Volumetria invalida "<<std::endl;
            }

        }
        double getPrice()  const{ return price; }

        void setPrice(double val) {
             if(val>=0){
        price = val;
        }else{
        std::cout << "preco invalido" <<std::endl;
        }


    }

        std::string getBrand() const { return brand; }

        void setBrand(std::string val) { brand = val; }

        std::string getName() const { return name; }

        void setName(std::string val) { name = val; }

      void showInfo()const;

    private:
        double ml;
        double price;
        std::string brand;
        std::string name;
};

#endif // PERFUME_H
