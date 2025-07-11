#include <iostream>
#include "block.h"

block::block()
{
    cellSize = 30;
    rotationState = 0;
    colors = getCellColors();
    rowOffSet = 0;
    columnOffSet = 0;
}

void block::draw()
{
    std::vector<position> tiles = getCellPositions();
    for (position item : tiles)
    {
        DrawRectangle(item.col * cellSize + 1, item.row * cellSize + 1, cellSize - 1, cellSize - 1, colors[id]);
    }
}

void block::move(int rows, int columns)
{
     rowOffSet += rows;
     columnOffSet += columns;
}

std::vector<position> block::getCellPositions()
{
    std::vector<position> tiles = cells[rotationState];
    std::vector<position> movedTiles;
    for(position item: tiles)
    {
        position newPos = position(item.row + rowOffSet, item.col + columnOffSet);
        movedTiles.push_back(newPos);
    }
    return movedTiles;
}

void block::Rotate()
{
    rotationState ++;
    if(rotationState == (int)cells.size())
    {
        rotationState = 0;
    }
}
