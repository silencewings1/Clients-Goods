#pragma once

class Client
{
public:
    static const Client& getGoldCardMember();
    static const Client& getSliverCardMember();
    static const Client& getNotMember();

    double getDiscount() const;
    void addPoints(double payment) const;
    double getPoints() const;

private:
    Client(double discount);

private:
    double discount;
    mutable double points;
};

#define GOLD_CARD_MEMBER (Client::getGoldCardMember())
#define SLIVER_CARD_MEMBER (Client::getSliverCardMember())
#define NOT_MEMBER (Client::getNotMember())