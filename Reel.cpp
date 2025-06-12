#include "Reel.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

Reel::Reel(const vector<Symbol>& symbols)
    : symbols(symbols) 
{}

Symbol Reel::spin() const {
    if (symbols.empty()) {
        throw runtime_error("No symbols to spin.");
    }
    
    // Genera un indice aleatorio basado en los pesos de los símbolos
    int totalWeight = 0;
    for (const auto& symbol : symbols) {
        totalWeight += symbol.getWeight();
    }

    int randomValue = rand() % totalWeight;
    int cumulativeWeight = 0;

    for (const auto& symbol : symbols) {
        cumulativeWeight += symbol.getWeight();
        if (randomValue <= cumulativeWeight) {
            return symbol;
        }
    }
 
    throw runtime_error("Failed to select a symbol.");
        
}