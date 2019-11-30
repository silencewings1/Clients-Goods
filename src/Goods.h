#pragma once

class Goods
{
public:
    static const Goods& getNestleCoffee();
    static const Goods& getCoffeeCup();
    static const Goods& getChocolate();
    static const Goods& getFruitTea();

    double payment(double discount) const;

private:
    Goods(double price, bool is_onsale);

private:
    double price;
    bool is_onsale;
};

#define NESTLE_COFFEE (Goods::getNestleCoffee())
#define COFFEE_CUP (Goods::getCoffeeCup())
#define CHOCOLATE (Goods::getChocolate())
#define FRUIT_TEA (Goods::getFruitTea())