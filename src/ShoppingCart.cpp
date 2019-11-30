#include "ShoppingCart.h"
#include "Goods.h"
#include "Client.h"

ShoppingCart::ShoppingCart(const Client& client)
    : client(client)
{
}

void ShoppingCart::addGoods(const Goods& goods, int amount)
{

    auto it = cart.find(&goods);
    if (it != cart.end()) // existed
    {
        cart.at(&goods) += amount;
    }
    else
    {
        cart.insert(std::make_pair(&goods, amount));
    }
}

double ShoppingCart::pay()
{
    double total_payment = 0.0;
    for(const auto& item : cart)
    {
        auto price = item.first->payment(client.getDiscount());
        auto num = item.second;
        total_payment += num * price;
    }
    
    client.addPoints(total_payment);
    return total_payment;
}