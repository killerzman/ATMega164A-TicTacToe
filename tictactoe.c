#include "tictactoe.h"
#include <stdio.h>

//ttt game board to work with
struct tttBoard tttB;

//reset everything on the game board
void initAll(){
    initBoard();
    initWinner();
}

//reset only the game board values
void initBoard(){
    for(char i=0; i<3; i++){
        for(char j=0; j<3; j++){
            tttB.board[i][j] = 0;
        }
    }
}

//reset only the game board winner
void initWinner(){
    tttB.winner = -1;
}

bool isAvailable(char row, char col){
    if(tttB.board[row][col] != 0){
        return false;
    }
    else return true;
}

bool isBoardFull(){
    for(char i=0; i<3; i++){
        for(char j=0; j<3; j++){
            if(isAvailable(i,j) == true){
                return false;
            }
        }
    }
    return true;
}

//checking if the game board is in any end state
//returning the state of the game board
bool checkForEndState(){
    //initializing state with default value for no clear winner
    char state = -1;
    //check if the board is full
    if(isBoardFull() == true){
        //the game is a tie
        state = 0;
        return state;
    }
    else{
        //checking rows
        for(char i=0; i<3; i++){
            if(tttB.board[i][0] != 0 && tttB.board[i][0] == tttB.board[i][1] && tttB.board[i][1] == tttB.board[i][2]){
                state = tttB.board[i][0];
                return state;
            }
        }
        //checking columns
        for(char j=0; j<3; j++){
            if(tttB.board[0][j] != 0 && tttB.board[0][j] == tttB.board[1][j] && tttB.board[1][j] == tttB.board[2][j]){
                state = tttB.board[0][j];
                return state;
            }
        }
        //checking first diagonal
        if(tttB.board[0][0] != 0 && tttB.board[0][0] == tttB.board[1][1] && tttB.board[1][1] == tttB.board[2][2]){
            state = tttB.board[0][0];
            return state;
        }
        //checking second diagonal
        if(tttB.board[0][2] != 0 && tttB.board[0][2] == tttB.board[1][1] && tttB.board[1][1] == tttB.board[2][0]){
            state = tttB.board[0][2];
            return state;
        }
    }
    return state;
}

void assignWinner(char state){
    tttB.winner = state;
}

//put value in designated row and column on the game board
void put(char row, char col, char value){
    //if the row and column haven't been occupied
    if(tttB.winner == -1 && isAvailable(row,col) == true){
        //put value
        tttB.board[row][col] = value;
        //check for end state every successful allocation
        char state = checkForEndState();
        if(state != -1){
            assignWinner(state);
        }
    }
}

char main(){
    initAll();
    put(0,0,1); put(0,1,1); put(0,2,1);
    put(1,0,1); put(1,1,2); put(1,2,2);
    put(2,0,2); put(2,1,2); put(2,2,1);
    printf("%d\n",tttB.winner);
}
