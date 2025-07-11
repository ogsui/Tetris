#include "game.h"
#include <random>
#include "block.h"

Game::Game()
{
    Grid = grid();
    blocks = GetAllBlocks();
    currentBlock = getRandomBlock();
    nextBlock = getRandomBlock();
}

block Game::getRandomBlock()
{
    if (blocks.empty())
    {
        blocks = GetAllBlocks();
    }
    int randomIndex = rand() % blocks.size();
    block Block = blocks[randomIndex];
    blocks.erase(blocks.begin() + randomIndex);
    return Block;
}

std::vector<block> Game::GetAllBlocks()
{

    return {IBlock(), JBlock(), LBlock(), OBlock(), SBlock(), TBlock(), ZBlock()};
}

void Game::Draw()
{
    Grid.draw();
    currentBlock.draw();
}

void Game::HandelInputted()
{
    int keyPressed = GetKeyPressed();
    switch (keyPressed)
    {
    case KEY_LEFT:
        MoveBlockleft();
        break;
    case KEY_RIGHT:
        MoveBlockright();
        break;
    case KEY_DOWN:
        MoveBlockdown();
        break;
    case KEY_UP:
        RotateBlock();
        break;
    }
}

void Game::MoveBlockleft()
{
    currentBlock.move(0, -1);
    if (IsBlockOutside() || BlockFits() == false)
    {
        currentBlock.move(0, 1);
    }
}

void Game::MoveBlockright()
{
    currentBlock.move(0, 1);
    if (IsBlockOutside() || BlockFits() == false)
    {
        currentBlock.move(0, -1);
    }
}

void Game::MoveBlockdown()
{
    currentBlock.move(1, 0);
    if (IsBlockOutside() || BlockFits() == false)
    {
        currentBlock.move(-1, 0);
        lockBlock();
    }
}

bool Game::IsBlockOutside()
{
    std::vector<position> tiles = currentBlock.getCellPositions();
    for (position item : tiles)
    {
        if (Grid.IscellOutside(item.row, item.col))
        {
            return true;
        }
    }
    return false;
}

void Game::RotateBlock()
{
    currentBlock.Rotate();
    if (IsBlockOutside() || BlockFits() == false)
    {
        currentBlock.UndoRotation();
    }
}

void Game::lockBlock()
{
    std::vector<position> tiles = currentBlock.getCellPositions();
    for (position item : tiles)
    {
        Grid.playField[item.row][item.col] = currentBlock.id;
    }
    currentBlock = nextBlock;
    nextBlock = getRandomBlock();
}

bool Game::BlockFits()
{
    std::vector<position> tiles = currentBlock.getCellPositions();
    for(position item : tiles)
    {
        if(Grid.IscellEmpty(item.row, item.col) == false)
        {
            return false;
        }
    }
    return true;  
}

void block::UndoRotation()
{
    rotationState--;
    if (rotationState < 0)
    {
        rotationState = 3;
    }
}