#pragma once
#include <vector>
#include <map>
#include "position.h"
#include "colors.h"

using namespace std;

class block
{
private:
    int cellSize;
    int rotationState;
    vector<Color> colors;
    int rowOffSet;
    int columnOffSet;

public:
    block();
    void draw();
    void move(int rows, int columns);
    std::vector<position> getCellPositions();
    int id;
    map<int, vector<position>> cells;
    void Rotate();
    void UndoRotation();
};
