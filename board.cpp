#include "board.h"
#include <iostream>
#include <map>

void drawBoard()
{
    char board[10][10];
    memset(&board[0][0], '.', sizeof(board));

    std::map<int, char> numToCharMap = {{0, 'A'}, {1, 'B'}, {2, 'C'}, {3, 'D'}, {4, 'E'}, {5, 'F'}, {6, 'G'}, {7, 'H'}, {8, 'I'}, {9, 'J'}};

    // Print the board header
    std::cout << "  ";
    for (int c = 1; c < 11; c++)
    {
        std::cout << c << " ";
    }
    std::cout << '\n';

    // Print the board
    for (int r = 0; r < 10; r++)
    {
        std::cout << numToCharMap[r] << " ";
        for (int c = 0; c < 10; c++)
        {
            std::cout << board[r][c] << " ";
        }
        std::cout << "\n";
    }
}