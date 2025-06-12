#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Symbol.h"
#include "Reel.h"
#include "SlotMachine.h"
using namespace std;

int main() {
    srand(time(0)); // Inicializa generador aleatorio

    // 1. Crear símbolos
    Symbol cherry("CEREZA", 40, 5);
    Symbol lemon("LIMON", 30, 10);
    Symbol bar("BAR", 20, 20);
    Symbol seven("SIETE", 10, 50);

    // 2. Crear vector de símbolos
    vector<Symbol> symbolList = {cherry, lemon, bar, seven};

    // 3. Crear varios rodillos con esos símbolos
    Reel reel1(symbolList);
    Reel reel2(symbolList);
    Reel reel3(symbolList);

    // 4. Crear la máquina tragamonedas con 3 rodillos
    vector<Reel> reels = {reel1, reel2, reel3};
    SlotMachine machine(reels);

    // Bucle principal de juego
    char opcion;
    do {
        machine.playRound();  // gira y evalúa
        cout << "¿Tirar de nuevo? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    cout << "¡Gracias por jugar!\n";
    return 0;
}
