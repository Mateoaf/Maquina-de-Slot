#include "Symbol.h"
#include <iostream>
using namespace std;


Symbol::Symbol(const string& name, int weight, int payout)
    : name(name), weight(weight), payout(payout) {}


string Symbol::getName() const {
    return name;
}

int Symbol::getWeight() const {
    return weight;
}

int Symbol::getPayout() const {
    return payout;
}