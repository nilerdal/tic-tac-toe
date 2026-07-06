# Terminal Tic-Tac-Toe

A terminal-based implementation of the classic Tic-Tac-Toe game written in C++. It features an interactive main menu that lets you choose between playing against a computer AI using Minimax algorithm 
or playing with a friend locally.

## Features

* Player vs Player mode (Local multiplayer)
* Player vs AI mode
* Simplified 1–9 grid input system
* Input validation for out-of-range moves and already occupied spots
* Built purely using the standard C++ library

## Prerequisites

A C++ compiler supporting C++17 or higher (such as g++ or clang).

## How to Run

1. Clone the repository.
   
2. Compile all source files together using C++17:
```bash
g++ *.cpp -o main -std=c++17

```

3. Run the executable:
```bash
./main

```

## Gameplay

Moves are selected by entering a single number from 1 to 9 corresponding to the grid squares below:

```text
 1 | 2 | 3 
---|---|---
 4 | 5 | 6 
---|---|---
 7 | 8 | 9 

```

The game validates your choice, updates the board, and switches turns automatically until a player wins or the match ends in a draw.

## License

This project is licensed under the MIT License.
