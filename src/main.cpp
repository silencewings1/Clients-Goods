#include <iostream>
#include "ShoppingCart.h"
#include "Client.h"
#include "Goods.h"

int main()
{
	auto cart = ShoppingCart(GOLD_CARD_MEMBER);
	cart.addGoods(NESTLE_COFFEE, 9);
	cart.addGoods(COFFEE_CUP);
	cart.addGoods(FRUIT_TEA, 5);
	cart.addGoods(CHOCOLATE, 10);

	std::cout << cart.pay() << std::endl;

	return 0;
}