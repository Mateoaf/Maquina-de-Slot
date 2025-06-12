#include <iostream>
#include "SlotMachine.h"
using namespace std;
    
        SlotMachine::SlotMachine(const vector<Reel>& reels) : reels(reels) {}

        // Metodo para girar cada rodillo y devuelve un vector de símbolos resultantes
        vector<Symbol> SlotMachine::spin() {
            vector<Symbol> result;
            for (const auto& reel : reels) {
                result.push_back(reel.spin());
            }
            return result;
        }
        
        //Evalua si los simbolos forman una combinacion ganadora
        int SlotMachine::evaluate(const vector<Symbol>& result) {
            if (result.empty()) {
                return 0; // No hay símbolos para evaluar
            }
            string nombreReferencia = result[0].getName();

            for (const auto& symbol : result) {
                if (symbol.getName() != nombreReferencia) {
                    return 0; // No es una combinación ganadora
                } 
            }
            return result[0].getPayout(); // Retorna el payout del primer símbolo
        }


        void SlotMachine::playRound() {
            vector<Symbol> result = spin();
            int payout = evaluate(result);
            cout << "Spun symbols: ";
            for (const auto& symbol : result) {
                cout << symbol.getName() << " ";
            }
            if (payout > 0) {
                cout << "\nYou won! Payout: " << payout << endl;
            } else {
                cout << "\nNo win this time." << endl;
            }
            cout << "\nTotal payout: " << payout << endl;
        }
        
