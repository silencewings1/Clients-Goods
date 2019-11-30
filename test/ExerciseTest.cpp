#include "gtest/gtest.h"
#include "ShoppingCart.h"
#include "Client.h"
#include "Goods.h"

// HELPER
void addSomeGoods(ShoppingCart& cart)
{
    cart.addGoods(NESTLE_COFFEE, 9);
	cart.addGoods(COFFEE_CUP);
	cart.addGoods(FRUIT_TEA, 5);
	cart.addGoods(CHOCOLATE, 10);
}

// TEST GOLD_CARD
TEST(_GOLD_CARD, test_ADD_and_ADD_MORE)
{
    auto cart = ShoppingCart(GOLD_CARD_MEMBER);

    addSomeGoods(cart);
    EXPECT_DOUBLE_EQ(cart.pay(), 1456.2);
    EXPECT_DOUBLE_EQ(GOLD_CARD_MEMBER.getPoints(), 1456.2);

    addSomeGoods(cart);
    EXPECT_DOUBLE_EQ(cart.pay(), 2912.4);
    EXPECT_DOUBLE_EQ(GOLD_CARD_MEMBER.getPoints(), 4368.6);
}

// TEST NOT_MEMBER
TEST(_NOT_MEMBER, test_ADD_and_ADD_MORE)
{
    auto cart = ShoppingCart(NOT_MEMBER);

    addSomeGoods(cart);
    EXPECT_DOUBLE_EQ(cart.pay(), 1570.0);
    EXPECT_DOUBLE_EQ(NOT_MEMBER.getPoints(), 1570.0);

    addSomeGoods(cart);
    EXPECT_DOUBLE_EQ(cart.pay(), 3140.0);
    EXPECT_DOUBLE_EQ(NOT_MEMBER.getPoints(), 4710.0);
}

