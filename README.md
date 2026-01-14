# Tetris in C++ with raylib

A Tetris clone built in C++ using the [raylib](https://www.raylib.com/) game library. This project recreates the classic gameplay with smooth rendering and input handling.

##  Features

- Classic Tetris mechanics
- Score and line tracking
- Collision detection
- Game over and restart
- Written in clean, modular C++

##  Getting Started

### Prerequisites

- C++17 or later
- raylib installed  
  ➜ [Installation guide](https://github.com/raysan5/raylib/wiki)

### Build & Run

```bash
git clone https://github.com/ogsui/Tetris.git
cd Tetris
g++ -std=c++17 main.cpp -o tetris -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
./tetris
