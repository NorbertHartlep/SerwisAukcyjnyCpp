#include "Auction.h"
#include <iostream>

using namespace std;
Auction::Auction(const string& _name, const string& _desc, int _price, const string& _expire, int _buy_now_price, int _id)
    : name(_name), desc(_desc), price(_price), buy_now_price(_buy_now_price), expire(_expire), id(_id) {
}
