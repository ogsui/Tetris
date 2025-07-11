#include "colors.h"
#include <vector>

using namespace std;

const Color darkGray = DARKGRAY;
const Color green = GREEN;
const Color red = RED;
const Color darkBlue = DARKBLUE;
const Color yellow = YELLOW;
const Color purple = PURPLE;
const Color cyan = {21, 204, 209, 255};
const Color blue = BLUE;

vector<Color> getCellColors()
{
    return {darkGray, green, red, darkBlue, yellow, purple, cyan, blue};
}