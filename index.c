#include <stdio.h>
#include <stdlib.h>

#define PLAYER_X 'X'
#define PLAYER_O 'O'
#define EMPTY ' '


void printBoard(char board[3][3]);
void makeMove(char board[3][3], char player);
int checkWin(char board[3][3]);
int isFull(char board[3][3]);
void makeAIMove(char board[3][3], char player);

// Main function
int main() {
    char board[3][3] = {
        {EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY}
    };
    
    int mode;
    printf("Choose game mode:\n1. Two Players\n2. Play Against Computer\n");
    scanf("%d", &mode);
    
    char currentPlayer = PLAYER_X;
    int winner = 0;

    while (1) {
        printBoard(board);

        if (mode == 1 || (mode == 2 && currentPlayer == PLAYER_X)) {
            printf("Player %c, it's your turn.\n", currentPlayer);
            makeMove(board, currentPlayer);
        } else if (mode == 2 && currentPlayer == PLAYER_O) {
            printf("Computer's turn.\n");
            makeAIMove(board, currentPlayer);
        }

        winner = checkWin(board);
        if (winner) {
            printBoard(board);
            printf("Player %c wins!\n", currentPlayer);
            break;
        }

        if (isFull(board)) {
            printBoard(board);
            printf("It's a draw!\n");
            break;
        }

        // Switch player
        currentPlayer = (currentPlayer == PLAYER_X) ? PLAYER_O : PLAYER_X;
    }

    return 0;
}

// Print the board
void printBoard(char board[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

// Player makes a move
void makeMove(char board[3][3], char player) {
    int row, col;
    while (1) {
        printf("Enter row (1-3) and column (1-3): ");
        scanf("%d %d", &row, &col);
        row--; col--; // Adjust for 0-indexing

        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == EMPTY) {
            board[row][col] = player;
            break;
        } else {
            printf("Invalid move! Try again.\n");
        }
    }
}

// Check if a player has won
int checkWin(char board[3][3]) {
    // Check rows, columns, and diagonals
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != EMPTY)
            return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != EMPTY)
            return 1;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != EMPTY)
        return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != EMPTY)
        return 1;
    
    return 0;
}

// Check if the board is full
int isFull(char board[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == EMPTY)
                return 0;
    return 1;
}

// Simple AI to make a move (just picks the first available spot)
void makeAIMove(char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == EMPTY) {
                board[i][j] = player;
                return;
            }
        }
    }
}
