#include <stdio.h>

char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

void display_board() {
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

void player_move(char symbol) {
    int row, col;

    printf("Enter row and column (1-3) for player %c: ", symbol);
    scanf("%d %d", &row, &col);

    if (row < 1 || row > 3 || col < 1 || col > 3) {
        printf("Invalid move. Please try again.\n");
        player_move(symbol);
        return;
    }

    row--;
    col--;

    if (board[row][col] != ' ') {
        printf("Position already occupied. Please try again.\n");
        player_move(symbol);
        return;
    }

    board[row][col] = symbol;
}

int check_win() {
    int i;

    // check rows
    for (i = 0; i < 3; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return 1;
        }
    }

    // check columns
    for (i = 0; i < 3; i++) {
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return 1;
        }
    }

    // check diagonals
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return 1;
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return 1;
    }

    return 0;
}

int main() {
    int i;
    char symbols[2] = {'X', 'O'};

    printf("Welcome to Tic Tac Toe!\n");
    printf("Player 1: X\n");
    printf("Player 2: O\n");

    while (1) {
        display_board();

        for (i = 0; i < 2; i++) {
            player_move(symbols[i]);

            if (check_win()) {
                display_board();
                printf("Player %c wins!\n", symbols[i]);
                return 0;
            }
        }
    }
    return 0;
}
