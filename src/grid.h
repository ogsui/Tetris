#pragma once // avoids duplication
#include <vector>
#include <raylib.h>

class grid
{
public:
    grid();
    int playField[20][10]; // 20 rows & 10 column
    void initialize();
    void print();
    void draw();
    bool IscellOutside(int row, int column);
    bool IscellEmpty(int row, int col);

private:
    int numRows;
    int numCols;
    int CellSize;
    std::vector<Color> colors;
    bool IsRowFull(int row);