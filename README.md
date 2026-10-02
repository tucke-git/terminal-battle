# Terminal Battle (RoboDroid RPG)

A lightweight, turn-based combat game built in C++ that runs directly in the terminal. The player faces off against "RoboDroid" in a state-driven duel featuring dynamic attack/heal calculations and an automated enemy turn loop.

## Features

- **Turn-Based Combat Loop:** Interactive player menu with Attack, Defend, Heal, and Run mechanics.
- **Two-Tier Enemy AI:** The automated opponent rolls to determine action intent, followed by a randomized potency roll.
- **Dynamic Flee Mechanic:** Escape attempts calculate probability thresholds to determine success.
- **Zero External Dependencies:** Built entirely with standard C++ libraries (`<iostream>`, `<cstdlib>`, `<ctime>`).

## Getting Started

### Prerequisites
- A C++ compiler (such as `g++` or `clang++`)

### Build and Run

1. Clone the repository:
   ```bash
   git clone [https://github.com/tucke-git/terminal-battle.git](https://github.com/tucke-git/terminal-battle.git)
   cd terminal-battle

2. Compile the source file:
   g++ -std=c++11 TurnBased.cpp -o battle

3. Run the executable:
   ./battle
