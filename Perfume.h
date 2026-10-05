#ifndef PERFUME_H
#define PERFUME_H

#include <string>
class Perfume
{
    public:

        Perfume(std::string n,std::string b, double p, double m);

        ~Perfume();


        double getMl() { return ml; }

        void setMl(double val) { ml = val; }

        double getPrice() { return price; }

        void setPrice(double val) { price = val; }

        std::string getBrand() { return brand; }

        void setBrand(std::string val) { brand = val; }

        std::string getName() { return name; }

        void setName(std::string val) { name = val; }

      void showInfo();

    private:
        double ml;
        double price;
        std::string brand;
        std::string name;
};

#endif // PERFUME_H
