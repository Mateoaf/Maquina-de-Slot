# 🎰 Simulador de Tragamonedas en C++

Este proyecto es un simulador básico de una máquina tragamonedas (slot machine), desarrollado en C++ con una arquitectura orientada a objetos. Incluye lógica de símbolos, rodillos y evaluación de combinaciones ganadoras.

## 🧩 Características

- Interfaz por consola simple.
- Símbolos con diferentes pesos (probabilidades) y pagos.
- Rodillos que giran aleatoriamente según los pesos.
- Evaluación de combinaciones ganadoras (alineación de símbolos).
- Posibilidad de jugar múltiples rondas.

## 🏗️ Estructura del Proyecto

- main.cpp
- Symbol.h / Symbol.cpp
- Reel.h / Reel.cpp
- SlotMachine.h / SlotMachine.cpp
- README.md

## ▶️ Cómo compilar y ejecutar

1. Compila el proyecto:

```bash
 g++ -std=c++11 main.cpp SlotMachine.cpp Reel.cpp Symbol.cpp -o slot_machine.exe

2. Ejecuta 
./slotmachine

## ✅ Combinaciones ganadoras

Actualmente, solo se paga si los **3 símbolos coinciden**.  
Cada símbolo tiene un **valor de premio definido**.

## 🧠 Futuras mejoras

- Añadir saldo y sistema de apuestas.
- Incluir múltiples modos de juego (usando patrón Strategy).
- Implementar estadísticas de tiradas.
- Guardar historial de partidas.
- Interfaz gráfica (SFML, Qt o SDL).

## 📄 Licencia
Este proyecto es educativo y libre para uso personal y aprendizaje.

