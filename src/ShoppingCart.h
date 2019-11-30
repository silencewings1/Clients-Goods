#pragma once
#include <unordered_map>

class Goods;
class Client;
using Container = std::unordered_map<const Goods*, int>;

class ShoppingCart
{
public:
    ShoppingCart(const Client& client);

    void addGoods(const Goods& goods, int amount = 1);
    double pay();

private:
    Container cart;
    const Client& client;
};