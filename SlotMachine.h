#ifndef SLOTMACHINE_H
#define SLOTMACHINE_H
using namespace std;
#include <vector>
#include "Reel.h"


class SlotMachine {
    private:
        vector<Reel> reels;
    public:
        SlotMachine(const vector<Reel>& reels);

        // Metodo para girar cada rodillo y devuelve un vector de símbolos resultantes
        vector<Symbol> spin();

        // Evalua si los simbolos forman una combinacion ganadora
        int evaluate(const vector<Symbol>& result);

        void playRound();
};

#endif