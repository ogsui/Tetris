#include "block.h"
#include "position.h"

class LBlock : public block
{
public:
    LBlock()
    {
        id = 1;
        cells[0] = {position{0, 2}, position{1, 0}, position{1, 1}, position{1, 2}};
        cells[1] = {position{0, 1}, position{1, 1}, position{2, 1}, position{2, 2}};
        cells[2] = {position{1, 0}, position{1, 1}, position{1, 2}, position{2, 0}};
        cells[3] = {position{0, 0}, position{0, 1}, position{1, 1}, position{2, 1}};
        move(0, 3);
    }
};

class TBlock : public block
{
public:
    TBlock()
    {
        id = 2;
        cells[0] = {position{0, 1}, position{1, 0}, position{1, 1}, position{1, 2}}; // T shape pointing up
        cells[1] = {position{0, 1}, position{1, 1}, position{1, 2}, position{2, 1}}; // T shape pointing right
        cells[2] = {position{1, 0}, position{1, 1}, position{1, 2}, position{2, 1}}; // T shape pointing down
        cells[3] = {position{0, 1}, position{1, 0}, position{1, 1}, position{2, 1}}; // T shape pointing left
        move(0, 3);
    }
};

class OBlock : public block
{
public:
    OBlock()
    {
        id = 3;
        cells[0] = {position{0, 0}, position{0, 1}, position{1, 1}, position{1, 0}};
        cells[1] = {position{0, 0}, position{0, 1}, position{1, 1}, position{1, 0}};
        cells[2] = {position{0, 0}, position{0, 1}, position{1, 1}, position{1, 0}};
        cells[3] = {position{0, 0}, position{0, 1}, position{1, 1}, position{1, 0}};
        move(0, 4);
    }
};

class SBlock : public block
{
public:
    SBlock()
    {
        id = 4;
        cells[0] = {position{0, 1}, position{0, 2}, position{1, 1}, position{1, 0}};
        cells[1] = {position{0, 0}, position{1, 0}, position{1, 1}, position{2, 1}};
        cells[2] = {position{0, 1}, position{0, 2}, position{1, 1}, position{1, 0}};
        cells[3] = {position{0, 0}, position{1, 0}, position{1, 1}, position{2, 1}};
        move(0, 3);
    }
};

class IBlock : public block
{
public:
    IBlock()
    {
        id = 5;
        cells[0] = {position{0, 0}, position{0, 1}, position{0, 2}, position{0, 3}};
        cells[1] = {position{0, 0}, position{1, 0}, position{2, 0}, position{3, 0}};
        cells[2] = {position{0, 0}, position{0, 1}, position{0, 2}, position{0, 3}};
        cells[3] = {position{0, 0}, position{1, 0}, position{2, 0}, position{3, 0}};
        move(0, 3);
    }
};

class JBlock : public block
{
public:
    JBlock()
    {
        id = 6;
        cells[0] = {position{0, 1}, position{1, 1}, position{2, 1}, position{2, 0}};
        cells[1] = {position{0, 0}, position{1, 0}, position{1, 1}, position{1, 2}};
        cells[2] = {position{0, 0}, position{0, 1}, position{1, 1}, position{2, 1}};
        cells[3] = {position{0, 2}, position{1, 2}, position{1, 1}, position{1, 0}};
        move(0, 3);
    }
};

class ZBlock : public block
{
public:
    ZBlock()
    {
        id = 7;
        cells[0] = {position{0, 0}, position{0, 1}, position{1, 1}, position{1, 2}};
        cells[1] = {position{0, 1}, position{1, 1}, position{1, 0}, position{2, 0}};
        cells[2] = {position{0, 0}, position{0, 1}, position{1, 1}, position{1, 2}};
        cells[3] = {position{0, 1}, position{1, 1}, position{1, 0}, position{2, 0}};
        move(0, 3);
    }
};