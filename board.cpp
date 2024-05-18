#include "board.h"
#include <iostream>

void drawBoard()
{
    char board[10][10];
    memset(&board[0][0], '.', sizeof(board));

    for (int r = 0; r < 10; r++)
    {
        for (int c = 0; c < 10; c++)
        {
            std::cout << board[r][c] << " ";
        }
        std::cout << "\n";
    }
}