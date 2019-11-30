#include "Goods.h"

Goods::Goods(double price, bool is_onsale)
    : price(price)
    , is_onsale(is_onsale)
{
}

const Goods& Goods::getNestleCoffee()
{
    static Goods goods(48.0, true);
    return goods;
}

const Goods& Goods::getCoffeeCup()
{
    static Goods goods(60.0, false);
    return goods;
}

const Goods& Goods::getChocolate()
{
    static Goods goods(48.8, false);
    return goods;
}

const Goods& Goods::getFruitTea()
{
    static Goods goods(118.0, false);
    return goods;
}

double Goods::payment(double discount) const
{
    if(is_onsale) return price;
    else return price * discount;
}