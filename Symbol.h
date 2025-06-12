#ifndef SYMBOL_H
#define SYMBOL_H

using namespace std;
#include <iostream>
#include <string>
class Symbol {
    private:
        string name;
        int weight;
        int payout;
    public: 
    Symbol(const string& name, int weight, int payout);

    string getName() const;
    int getWeight() const;
    int getPayout() const;
};

#endif 