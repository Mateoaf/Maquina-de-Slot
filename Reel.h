#include <iostream>
#include <vector>
#include <string>

#include "Symbol.h"
#ifndef REEL_H
#define REEL_H
using namespace std;

class Reel {
    private:
        vector<Symbol> symbols;
    public:
        Reel(const vector<Symbol>& symbols);

        Symbol spin() const;
};

#endif