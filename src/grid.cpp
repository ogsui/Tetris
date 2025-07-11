#include <iostream>
#include "grid.h"
#include "colors.h"

using namespace std;

grid::grid()
{
    numCols = 10;
    numRows = 20;
    CellSize = 30;
    initialize();
    colors = getCellColors();
}

void grid::initialize()
{
    for (int row = 0; row < numRows; row++)
    {
        for (int col = 0; col < numCols; col++)
        {
            playField[row][col] = 0;
        }
    }
}

void grid::print()
{
    for (int row = 0; row < numRows; row++)
    {
        for (int col = 0; col < numCols; col++)
        {
            cout << playField[row][col] << " ";
        }
        cout << endl;
    }
}

void grid::draw()
{

    for (int row = 0; row < numRows; row++)
    {
        for (int col = 0; col < numCols; col++)
        {
            int cellValue = playField[row][col];
            DrawRectangle(col * CellSize + 1, row * CellSize + 1, CellSize - 1, CellSize - 1, colors[cellValue]);
        }
    }
}

bool grid::IscellOutside(int row, int col)
{
    if (row >= 0 && row < numRows && col >= 0 && col < numCols)
    {
        return false;
    }
    return true;
}

bool grid::IscellEmpty(int row, int col)
{
    if(playField[row][col]==0)
    {
        return true;
    }
    return false;
}

void grid::ClearRow(int row)
{
    for(int col = 0; col < numCols; col++)
    {
        grid[row][col]=0;
    }
}