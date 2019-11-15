#ifndef TICTACTOE_H_INCLUDED
#define TICTACTOE_H_INCLUDED

typedef enum {false,true} bool;

struct tttBoard{
    char board[3][3]; //0 for empty, 1 for player 1, 2 for player 2
    char winner; //-1 for undecided, 0 for tie, 1 for player 1, 2 for player 2
};

void initAll();

void initBoard();

void initWinner();

bool isAvailable(char row, char col);

bool isBoardFull();

bool checkForEndState();

void assignWinner(char state);

void put(char row, char col, char value);

#endif // TICTACTOE_H_INCLUDED
