#pragma once
#include "grid.h"
#include "blockType.cpp"

class Game
{
private:
    std::vector<block> blocks;
    block currentBlock;
    block nextBlock;
    bool IsBlockOutside();
    void RotateBlock();
    void lockBlock();
    bool BlockFits();
public:
    Game();
    block getRandomBlock();
    std::vector<block> GetAllBlocks();
    void Draw();
    void HandelInputted();
    void MoveBlockleft();
    void MoveBlockright();
    void MoveBlockdown();
    grid Grid;
};